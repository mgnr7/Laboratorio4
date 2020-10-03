#pragma once

#include "Operando.h"

class Complejo : public Operando
{
public:
	Complejo();
	Complejo(double real = 0, double imaginario = 0);
	~Complejo();

	void suma(const stack<Operando>* pila) override;
	void resta(const stack<Operando>* pila) override;
	void multiplicacion(const stack<Operando>* pila) override;
	void division(const stack<Operando>* pila) override;

	void extraerValor(const stack<Operando>* pila, string expresion) override;

private:
	//a + bi
	double parteReal;  //a
	double parteImaginaria;// b
};


inline Complejo::Complejo(double real = 0, double imaginario = 0)
{
	this->parteReal = real;
	this->parteImaginaria = imaginario;
}


inline Complejo::~Complejo()
{
}


inline void Complejo::suma(const stack<Operando>* pila)
{
	/*Se extraen 2 valores de la pila y se suman*/
}

inline void Complejo::resta(const stack<Operando>* pila)
{
	/*Se extraen 2 valores de la pila y se restan*/
}

inline void Complejo::multiplicacion(const stack<Operando>* pila)
{
	/*Se extraen 2 valores de la pila y se multiplican*/
}

inline void Complejo::division(const stack<Operando>* pila)
{
	/*Se extraen 2 valores de la pila y se dividen*/
}

inline void Complejo::extraerValor(const stack<Operando>* pila, string expresion)
{

}