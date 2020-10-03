#pragma once

#include "Operando.h"

using namespace std;

class Double : public Operando
{
public:
	explicit Double(double valor = 0.0);
	~Double();

	void setValorString(string val) override;
	string getValorString() override;

	double traducirValorString(string val);

	void suma( stack<Operando*>* pila) override;
	void resta( stack<Operando*>* pila) override;
	void multiplicacion( stack<Operando*>* pila) override;
	void division( stack<Operando*>* pila) override;

	int extraerValor( stack<Operando*>* pila, string expresion, int indice) override;


private:
	double valor;
};


inline Double::Double(double valor)
{
	this->valor = valor;
}


inline Double::~Double()
{
}

inline void Double::setValorString(string val)
{
	valorString = val;
}

inline string Double::getValorString()
{
	return valorString;
}

inline double Double::traducirValorString(string val)
{
	double d = stod(val);

	return d;
}

inline void Double::suma( stack<Operando*>* pila)
{
	/*Se extraen 2 valores de la pila y se suman*/
	string valor1 = pila->top()->getValorString();
	pila->pop();
	string valor2 = pila->top()->getValorString();


	double val1 = traducirValorString(valor1);
	double val2 = traducirValorString(valor2);

	double result = val1 + val2;

	Double* resultadoSuma = new Double(result);

	pila->push(resultadoSuma);
}

inline void Double::resta( stack<Operando*>* pila)
{
	/*Se extraen 2 valores de la pila y se restan*/
	string valor1 = pila->top()->getValorString();
	pila->pop();
	string valor2 = pila->top()->getValorString();
	pila->pop();

	double val1 = traducirValorString(valor1);
	double val2 = traducirValorString(valor2);

	double result = val1 - val2;

	Double* resultadoResta = new Double(result);

	pila->push(resultadoResta);
}

inline void Double::multiplicacion( stack<Operando*>* pila)
{
	/*Se extraen 2 valores de la pila y se multiplican*/
	string valor1 = pila->top()->getValorString();
	pila->pop();
	string valor2 = pila->top()->getValorString();
	pila->pop();

	double val1 = traducirValorString(valor1);
	double val2 = traducirValorString(valor2);

	double result = val1 * val2;

	Double* resultadoMult = new Double(result);

	pila->push(resultadoMult);
}

inline void Double::division( stack<Operando*>* pila)
{
	/*Se extraen 2 valores de la pila y se dividen*/
	string valor1 = pila->top()->getValorString();
	pila->pop();
	string valor2 = pila->top()->getValorString();
	pila->pop();

	double val1 = traducirValorString(valor1);
	double val2 = traducirValorString(valor2);

	double result = val1 / val2;

	Double* resultadoDiv = new Double(result);

	pila->push(resultadoDiv);
}

inline int Double::extraerValor( stack<Operando*>* pila, string expresion, int indice)
{
	string subs = expresion.substr(indice, 3);
	double d = stod(subs);

	/*Se crea un nuevo operando de tipo double y se inserta en la pila*/
	Double* operando_double = new Double(d);
	pila->push(operando_double);

	/*Se retorna el indice + 3 porque un double son 3 caracteres*/
	return indice + 3;
}

