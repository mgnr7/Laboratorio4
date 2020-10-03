#pragma once

#include "Operando.h"

class Complejo : public Operando
{
public:
	Complejo();
	Complejo(double real = 0, double imaginario = 0);
	~Complejo();

	void setValorString(string val) override;
	string getValorString() override;

	void traducirValorString(string val);

	void suma(stack<Operando*>* pila) override;
	void resta(stack<Operando*>* pila) override;
	void multiplicacion(stack<Operando*>* pila) override;
	void division(stack<Operando*>* pila) override;

	int extraerValor(stack<Operando*>* pila, string expresion, int indice) override;

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


inline void Complejo::setValorString(string val)
{
	valorString = val;
}

inline string Complejo::getValorString()
{
	return valorString;
}

inline void Complejo::traducirValorString(string val)
{

}

inline void Complejo::suma( stack<Operando*>* pila)
{
	/*Se extraen 2 valores de la pila y se suman*/
}

inline void Complejo::resta(stack<Operando*>* pila)
{
	/*Se extraen 2 valores de la pila y se restan*/
}

inline void Complejo::multiplicacion( stack<Operando*>* pila)
{
	/*Se extraen 2 valores de la pila y se multiplican*/
}

inline void Complejo::division( stack<Operando*>* pila)
{
	/*Se extraen 2 valores de la pila y se dividen*/
}

inline int Complejo::extraerValor(stack<Operando*>* pila, string expresion, int indice)
{
	string subs = expresion.substr(indice, 3);
	
	/*Se saca el valor complejo*/

	/*Se crea un nuevo operando de tipo complejo y se inserta en la pila*/
	
	/*pila->push(operando_double);*/

	/*Se retorna el indice + 3 porque un double son 3 caracteres*/
	return indice + 3;
}