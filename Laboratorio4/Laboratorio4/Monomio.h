#pragma once

#include "Operando.h"

class Monomio : public Operando
{
public:
	Monomio(double coef = 0, int grado = 0);
	~Monomio();

	void setValorString(string val) override;
	string getValorString() override;

	void traducirValorString(string val);

	void suma(stack<Operando*>* pila) override;
	void resta(stack<Operando*>* pila) override;
	void multiplicacion(stack<Operando*>* pila) override;
	void division(stack<Operando*>* pila) override;

	int extraerValor(stack<Operando*>* pila, string expresion, int indice) override;

private:
	double coeficiente;
	int grado;
};


inline Monomio::Monomio(double coef, int grado)
{
	this->coeficiente = coef;
	this->grado = grado;
}


inline Monomio::~Monomio()
{
}

inline void Monomio::setValorString(string val)
{
	valorString = val;
}

inline string Monomio::getValorString()
{
	return valorString;
}

inline void Monomio::traducirValorString(string val)
{
}


inline void Monomio::suma( stack<Operando*>* pila)
{
	/*Se extraen 2 valores de la pila y se suman*/
}

inline void Monomio::resta( stack<Operando*>* pila)
{
	/*Se extraen 2 valores de la pila y se restan*/
}

inline void Monomio::multiplicacion( stack<Operando*>* pila)
{
	/*Se extraen 2 valores de la pila y se multiplican*/
}

inline void Monomio::division( stack<Operando*>* pila)
{
	/*Se extraen 2 valores de la pila y se dividen*/
}

inline int Monomio::extraerValor( stack<Operando*>* pila, string expresion, int indice)
{
	return 0;
}
