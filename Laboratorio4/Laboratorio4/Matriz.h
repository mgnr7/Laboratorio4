#pragma once
#include "Operando.h"
#include <vector>

class Matriz : public Operando
{
public:
	Matriz();
	Matriz(int n, std::vector<int> datos); //Recibe un vector normal de enteros y los formatea en una matriz n*n
	Matriz(int n, int** matriz); // Recibe una matriz ya formateada y solo la asigna
	~Matriz();

	void setValorString(string val) override;
	string getValorString() override;

	void traducirValorString(string val);

	void suma( stack<Operando*>* pila) override;
	void resta( stack<Operando*>* pila) override;
	void multiplicacion( stack<Operando*>* pila) override;
	void division( stack<Operando*>* pila) override;

	int extraerValor( stack<Operando*>* pila, string expresion, int indice) override;

private:
	int tamano; //N*N
	int** matriz;
};

inline Matriz::Matriz()
{
	tamano = 1;
	**matriz = 0;
}

inline Matriz::Matriz(int n, std::vector<int> datos)
{
	this->tamano = n;
	matriz = (int**)malloc(tamano * tamano * sizeof(int));
	//TO DO: Convertir el vector de datos a una matriz n*n
}

inline Matriz::Matriz(int n, int** matriz)
{
	this->tamano = n;
	this->matriz = matriz;
}


inline Matriz::~Matriz()
{
	delete matriz;
}

inline void Matriz::setValorString(string val)
{
	valorString = val;
}

inline string Matriz::getValorString()
{
	return valorString;
}

inline void Matriz::traducirValorString(string val)
{

}

inline void Matriz::suma( stack<Operando*>* pila)
{
	/*Se extraen 2 valores de la pila y se suman*/
}

inline void Matriz::resta( stack<Operando*>* pila)
{
	/*Se extraen 2 valores de la pila y se restan*/
}

inline void Matriz::multiplicacion( stack<Operando*>* pila)
{
	/*Se extraen 2 valores de la pila y se multiplican*/
}

inline void Matriz::division( stack<Operando*>* pila)
{
	/*Se extraen 2 valores de la pila y se dividen*/
}

inline int Matriz::extraerValor( stack<Operando*>* pila, string expresion, int indice)
{
}