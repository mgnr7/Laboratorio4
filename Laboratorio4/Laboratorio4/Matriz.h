#pragma once
#include "Operando.h"
#include <vector>

class Matriz : public Operando
{
public:
	Matriz();
	Matriz(int n);//Inicializa una matriz n*n rellena de 0s
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

inline Matriz::Matriz(int n)
{
	this->tamano = n;
	matriz = (int**)malloc(tamano * tamano * sizeof(int));
	for (int x = 0; x < tamano; x++) {
		for (int y = 0; y < tamano; y++) {
			matriz[x][y] = 0;
		}
	}
}

inline Matriz::Matriz(int n, std::vector<int> datos)
{
	this->tamano = n;
	matriz = (int**)malloc(tamano * tamano * sizeof(int));
	for (int x = 0; x < tamano; x++) {
		for (int y = 0; y < tamano; y++) {
			matriz[x][y] = datos[(tamano * x) + y]; //Rellena la matriz usando los datos del vector
		}
	}
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
	Matriz* m1 = dynamic_cast<Matriz*>(pila->top());
	pila->pop();
	Matriz* m2 = dynamic_cast<Matriz*>(pila->top());
	pila->pop();

	for (int x = 0; x < tamano; x++) {
		for (int y = 0; y < tamano; y++) {
			m1->matriz[x][y] += m2->matriz[x][y];
		}
	}

}

inline void Matriz::resta( stack<Operando*>* pila)
{
	/*Se extraen 2 valores de la pila y se restan*/
	Matriz* m1 = dynamic_cast<Matriz*>(pila->top());
	pila->pop();
	Matriz* m2 = dynamic_cast<Matriz*>(pila->top());
	pila->pop();

	for (int x = 0; x < tamano; x++) {
		for (int y = 0; y < tamano; y++) {
			m1->matriz[x][y] -= m2->matriz[x][y];
		}
	}
}

inline void Matriz::multiplicacion( stack<Operando*>* pila)
{
	/*Se extraen 2 valores de la pila y se multiplican*/
	Matriz* m1 = dynamic_cast<Matriz*>(pila->top());
	pila->pop();
	Matriz* m2 = dynamic_cast<Matriz*>(pila->top());
	pila->pop();

	Matriz* mAux = new Matriz(m1->tamano);//Matriz n*n auxiliar rellena de 0s

	for (int x = 0; x < tamano; x++) {
		for (int y = 0; y < tamano; y++) {
			for (int z = 0; z < tamano; z++) {
				mAux->matriz[x][y] += m1->matriz[x][z] * m2->matriz[z][y];
			}
		}
	}
}

inline void Matriz::division( stack<Operando*>* pila)
{
	/*Se extraen 2 valores de la pila y se dividen*/
	//no aplica
}

inline int Matriz::extraerValor( stack<Operando*>* pila, string expresion, int indice)
{
}