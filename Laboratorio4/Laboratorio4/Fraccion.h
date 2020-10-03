#pragma once

#include "Operando.h"

class Fraccion : public Operando
{
public:
	Fraccion(int num = 0, int den = 0);
	~Fraccion();

	void setValorString(string val) override;
	string getValorString() override;

	double traducirValorString(string val);

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

inline double Fraccion::traducirValorString(string val)
{
	double d = stod(val);

	return d;
}

inline void Fraccion::suma( stack<Operando*>* pila)
{
	/*Se extraen 2 valores de la pila y se suman*/
}

inline void Fraccion::resta( stack<Operando*>* pila)
{
	/*Se extraen 2 valores de la pila y se restan*/
}

inline void Fraccion::multiplicacion( stack<Operando*>* pila)
{
	/*Se extraen 2 valores de la pila y se multiplican*/
}

inline void Fraccion::division( stack<Operando*>* pila)
{
	/*Se extraen 2 valores de la pila y se dividen*/
}

inline int Fraccion::extraerValor( stack<Operando*>* pila, string expresion, int indice)
{
	/*Se extrae la fraccion del string*/
}
