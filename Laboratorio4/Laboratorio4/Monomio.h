#pragma once

#include "Operando.h"

class Monomio : public Operando
{
public:
	Monomio(double coef = 0, int grado = 0);
	~Monomio();
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
