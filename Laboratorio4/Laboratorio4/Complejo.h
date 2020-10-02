#pragma once

#include "Operando.h"

class Complejo : public Operando
{
public:
	Complejo();
	Complejo(double real = 0, double imaginario = 0);
	~Complejo();

private:
	//a + bi
	double parteReal;  //a
	double parteImaginaria;// b
};


inline Complejo::Complejo(double real, double imaginario)
{
	this->parteReal = real;
	this->parteImaginaria = imaginario;
}


inline Complejo::~Complejo()
{
}
