#pragma once

#include "Operando.h"
#include "Monomio.h"
#include <vector>

class Polinomio : public Operando
{
public:
	Polinomio();
	explicit Polinomio(std::vector<Monomio> vectorMonomios); // recibe vector de monomios
	explicit Polinomio(Monomio* arregloMonomios); // recibe arreglo de monomios

	~Polinomio();

	void suma(const stack<Operando>* pila) override;
	void resta(const stack<Operando>* pila) override;
	void multiplicacion(const stack<Operando>* pila) override;
	void division(const stack<Operando>* pila) override;

	void extraerValor(const stack<Operando>* pila, string expresion) override;

private:
	std::vector<Monomio> polinomio;
};

inline Polinomio::Polinomio()
{
}

inline Polinomio::Polinomio(std::vector<Monomio> vectorMonomios)
{
	this->polinomio = vectorMonomios;
}

inline Polinomio::Polinomio(Monomio* arregloMonomios)
{
}

inline Polinomio::~Polinomio()
{
}

inline void Polinomio::suma(const stack<Operando>* pila)
{
	/*Se extraen 2 valores de la pila y se suman*/
}

inline void Polinomio::resta(const stack<Operando>* pila)
{
	/*Se extraen 2 valores de la pila y se restan*/
}

inline void Polinomio::multiplicacion(const stack<Operando>* pila)
{
	/*Se extraen 2 valores de la pila y se multiplican*/
}

inline void Polinomio::division(const stack<Operando>* pila)
{
	/*Se extraen 2 valores de la pila y se dividen*/
}

inline void Polinomio::extraerValor(const stack<Operando>* pila, string expresion)
{
}
