#pragma once

#include "Operando.h"

class Fraccion : public Operando
{
public:
	Fraccion(int num = 0, int den = 0);
	~Fraccion();
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
