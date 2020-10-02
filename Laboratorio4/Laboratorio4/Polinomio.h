#pragma once

#include "Operando.h"
#include "Monomio.h"
#include <vector>

class Polinomio : public Operando
{
public:
	Polinomio();
	Polinomio(std::vector<Monomio> vectorMonomios); // recibe vector de monomios
	Polinomio(Monomio* arregloMonomios); // recibe arreglo de monomios

	~Polinomio();
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
