#pragma once
#include <string>
#include <stack>

using namespace std;

class Operando 
{
public:
	Operando();
	~Operando();

	void evaluarExpresion(string expresion);

	virtual void suma(Operando oper2) = 0;
	virtual void resta(Operando oper2) = 0;
	virtual void multiplicacion(Operando oper2) = 0;
	virtual void division(Operando oper2) = 0;

};

Operando::Operando()
{
}

Operando::~Operando()
{
}

void Operando::evaluarExpresion(string expresion)
{
	stack<Operando> pila;

	for (int i = 0; i < expresion.size(); ++i)
	{
		if (expresion.at(i) == '*' || expresion.at(i) == '+' || expresion.at(i) == '-' || expresion.at(i) == '/')
		{
			switch (expresion.at(i))
			{
			case '*':

				Operando oper1 = pila.pop();
				Operando oper2 = pila.pop();

				pila.push();


				break;

			case '+':
				break;

			case '-':
				break;

			case '/':
				break;
			}
		}
		else
		{
			string subs = expresion.substr(i, 3);
			double d = stod(subs);
		}







	}
}
