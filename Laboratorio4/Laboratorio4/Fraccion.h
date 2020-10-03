#pragma once

#include "Operando.h"

class Fraccion : public Operando
{
public:
	Fraccion(int num = 0, int den = 0);
	~Fraccion();

	void setValorString(string val) override;
	string getValorString() override;

	void traducirValorString(string val);

	void suma( stack<Operando*>* pila) override;
	void resta( stack<Operando*>* pila) override;
	void multiplicacion( stack<Operando*>* pila) override;
	void division( stack<Operando*>* pila) override;

	int extraerValor( stack<Operando*>* pila, string expresion, int indice) override;

private:
	int numerador;
	int denominador;
};


inline Fraccion::Fraccion(int num, int den)
{
	this->numerador = num;
	this->denominador = den;
}

inline Fraccion::~Fraccion()
{
}


inline void Fraccion::setValorString(string val)
{
	valorString = val;
}

inline string Fraccion::getValorString()
{
	return valorString;
}

inline void Fraccion::traducirValorString(string val)
{

}

inline void Fraccion::suma( stack<Operando*>* pila)
{
	/*Se extraen 2 valores de la pila y se suman*/
	string valor1 = pila->top()->getValorString();
	pila->pop();
	string valor2 = pila->top()->getValorString();
	pila->pop();


}

inline void Fraccion::resta( stack<Operando*>* pila)
{
	/*Se extraen 2 valores de la pila y se restan*/
	string valor1 = pila->top()->getValorString();
	pila->pop();
	string valor2 = pila->top()->getValorString();
	pila->pop();
}

inline void Fraccion::multiplicacion( stack<Operando*>* pila)
{
	/*Se extraen 2 valores de la pila y se multiplican*/
	string valor1 = pila->top()->getValorString();
	pila->pop();
	string valor2 = pila->top()->getValorString();
	pila->pop();
}

inline void Fraccion::division( stack<Operando*>* pila)
{
	/*Se extraen 2 valores de la pila y se dividen*/
	string valor1 = pila->top()->getValorString();
	pila->pop();
	string valor2 = pila->top()->getValorString();
	pila->pop();
}

inline int Fraccion::extraerValor( stack<Operando*>* pila, string expresion, int indice)
{
	/*Se extrae la fraccion del string*/
	int numerador = expresion.at(indice) - '0';
	int denominador = expresion.at(indice + 2) - '0';

	/*Valor string*/
	string subs = expresion.substr(indice, 3);

	Fraccion* operando_Fraccion = new Fraccion(numerador, denominador);
	operando_Fraccion->setValorString(subs);

	pila->push(operando_Fraccion);

	/*Se retorna el indice + 3 porque un double son 3 caracteres*/
	return indice + 3;
}
