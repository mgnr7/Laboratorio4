#pragma once

#include "Operando.h"

using namespace std;

class Double : public Operando<double>
{
public:
	explicit Double(double valor = 0.0);
	~Double();

	void suma(const stack<Operando>* pila) override;
	void resta(const stack<Operando>* pila) override;
	void multiplicacion(const stack<Operando>* pila) override;
	void division(const stack<Operando>* pila) override;

	void extraerValor(const stack<Operando>* pila, string expresion) override;
	void resultadoToString(const stack<Operando>* pila) override;


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

inline void Double::suma(const stack<Operando>* pila)
{

}

inline void Double::resta(const stack<Operando>* pila)
{
}

inline void Double::multiplicacion(const stack<Operando>* pila)
{
}

inline void Double::division(const stack<Operando>* pila)
{
}

inline void Double::extraerValor(const stack<Operando>* pila, string expresion)
{
	/*
	string subs = expresion.substr(0, 3);
	double d = stod(subs);
	*/
	
}

inline void Double::resultadoToString(const stack<Operando>* pila)
{
}
