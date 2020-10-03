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

	void setValorString(string val) override;
	string getValorString() override;

	void traducirValorString(string val);

	void suma(stack<Operando*>* pila) override;
	void resta(stack<Operando*>* pila) override;
	void multiplicacion(stack<Operando*>* pila) override;
	void division(stack<Operando*>* pila) override;

	int extraerValor(stack<Operando*>* pila, string expresion, int indice) override;

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

inline void Polinomio::setValorString(string val)
{
	valorString = val;
}

inline string Polinomio::getValorString()
{
	return valorString;
}

inline void Polinomio::traducirValorString(string val)
{

}

inline void Polinomio::suma( stack<Operando*>* pila)
{
	/*Se extraen 2 valores de la pila y se suman*/
}

inline void Polinomio::resta(stack<Operando*>* pila)
{
	/*Se extraen 2 valores de la pila y se restan*/
}

inline void Polinomio::multiplicacion(stack<Operando*>* pila)
{
	/*Se extraen 2 valores de la pila y se multiplican*/
}

inline void Polinomio::division(stack<Operando*>* pila)
{
	/*Se extraen 2 valores de la pila y se dividen*/
}

inline int Polinomio::extraerValor(stack<Operando*>* pila, string expresion, int indice)
{
}
