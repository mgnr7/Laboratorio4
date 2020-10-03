#pragma once
#include <string>
#include <stack>

using namespace std;

class Operando 
{
public:
	Operando();
	~Operando();

	Operando* evaluarExpresion(string expresion);


	virtual void suma(const stack<Operando>* pila) = 0;
	virtual void resta(const stack<Operando>* pila) = 0;
	virtual void multiplicacion(const stack<Operando>* pila) = 0;
	virtual void division(const stack<Operando>* pila) = 0;

	virtual void extraerValor(const stack<Operando>* pila, string expresion) = 0;

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
	stack<Operando> pila;

	for (int i = 0; i < expresion.size(); ++i)
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
				extraerValor(&pila, expresion);
			}

			
		}
	}
	return &(pila.top());
}
