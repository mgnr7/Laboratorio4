#pragma once
#include <string>
#include <stack>

using namespace std;

class Operando 
{
protected:
	string valorString;

public:

	Operando();
	~Operando();

	Operando* evaluarExpresion(string expresion);

	virtual void setValorString(string val) = 0;
	virtual string getValorString() = 0;

	virtual void suma( stack<Operando*>* pila) = 0;
	virtual void resta( stack<Operando*>* pila) = 0;
	virtual void multiplicacion( stack<Operando*>* pila) = 0;
	virtual void division( stack<Operando*>* pila) = 0;

	virtual int extraerValor( stack<Operando*>* pila, string expresion, int indice) = 0;

};

Operando::Operando()
{
}

Operando::~Operando()
{
}


/*Metodo plantilla: La idea es un algoritmo que utiliza operaciones que pueden ser implementadas de diferente manera por cada clase*/
Operando* Operando::evaluarExpresion(string expresion)
{
	stack<Operando*> pila;

	for (unsigned int i = 0; i < expresion.size(); ++i)
	{
		if (expresion.at(i) == '*' || expresion.at(i) == '+' || expresion.at(i) == '-' || expresion.at(i) == '/')
		{
			switch (expresion.at(i))
			{
			case '*':
				/*Realizar metodo multiplicacion*/
				multiplicacion(&pila);

				break;

			case '+':
				/*Realizar metodo suma*/
				suma(&pila);
				break;

			case '-':
				/*Realizar metodo resta*/
				resta(&pila);
				break;

			case '/':
				/*Realizar metodo division*/
				division(&pila);
				break;
			}
		}
		else
		{
			if (expresion.at(i) != ' ') 
			{
				/*Indicar que parte de la expresion se va leyendo*/
				i = extraerValor(&pila, expresion, i+1);
			}

			
		}
	}

	Operando** result = new Operando*;
	*result = pila.top();

	return *result;
}
