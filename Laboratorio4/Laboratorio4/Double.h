#pragma once

#include "Operando.h"

using namespace std;

class Double : public Operando 
{
public:
	explicit Double(double valor = 0.0);
	~Double();

private:
	double valor;
};


inline Double::Double(double valor = 0.0)
{
	this->valor = valor;
}


inline Double::~Double()
{
}