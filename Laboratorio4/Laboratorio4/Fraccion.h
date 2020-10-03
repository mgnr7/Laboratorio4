#pragma once

#include "Operando.h"

class Fraccion : public Operando
{
public:
	Fraccion(int num = 0, int den = 0);
	~Fraccion();

	void suma(const stack<Operando>* pila) override;
	void resta(const stack<Operando>* pila) override;
	void multiplicacion(const stack<Operando>* pila) override;
	void division(const stack<Operando>* pila) override;

	void extraerValor(const stack<Operando>* pila, string expresion) override;
private:
	int numerador;
	int denominador;
};


inline Fraccion::Fraccion(int num = 0, int den = 0)
{
	this->numerador = num;
	this->denominador = den;
}

inline Fraccion::~Fraccion()
{
}

inline void Fraccion::suma(const stack<Operando>* pila)
{
	/*Se extraen 2 valores de la pila y se suman*/
}

inline void Fraccion::resta(const stack<Operando>* pila)
{
	/*Se extraen 2 valores de la pila y se restan*/
}

inline void Fraccion::multiplicacion(const stack<Operando>* pila)
{
	/*Se extraen 2 valores de la pila y se multiplican*/
}

inline void Fraccion::division(const stack<Operando>* pila)
{
	/*Se extraen 2 valores de la pila y se dividen*/
}

inline void Fraccion::extraerValor(const stack<Operando>* pila, string expresion)
{
	/*Se extrae la fraccion del string*/
}
