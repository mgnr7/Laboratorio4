#pragma once

#include "Operando.h"

class Monomio : public Operando
{
public:
	Monomio(double coef = 0, int grado = 0);
	~Monomio();

	void suma(const stack<Operando>* pila) override;
	void resta(const stack<Operando>* pila) override;
	void multiplicacion(const stack<Operando>* pila) override;
	void division(const stack<Operando>* pila) override;

	void extraerValor(const stack<Operando>* pila, string expresion) override;

private:
	double coeficiente;
	int grado;
};


inline Monomio::Monomio(double coef = 0, int grado = 0)
{
	this->coeficiente = coef;
	this->grado = grado;
}


inline Monomio::~Monomio()
{
}

inline void Monomio::suma(const stack<Operando>* pila)
{
	/*Se extraen 2 valores de la pila y se suman*/
}

inline void Monomio::resta(const stack<Operando>* pila)
{
	/*Se extraen 2 valores de la pila y se restan*/
}

inline void Monomio::multiplicacion(const stack<Operando>* pila)
{
	/*Se extraen 2 valores de la pila y se multiplican*/
}

inline void Monomio::division(const stack<Operando>* pila)
{
	/*Se extraen 2 valores de la pila y se dividen*/
}

inline void Monomio::extraerValor(const stack<Operando>* pila, string expresion)
{
}
