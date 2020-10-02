#pragma once

#include "Operando.h"

class Double : public Operando 
{
public:
	Double(double valor = 0.0);
	~Double();

private:
	double valor;
};


inline Double::Double(double valor)
{
	this->valor = valor;
}


inline Double::~Double()
{
}
