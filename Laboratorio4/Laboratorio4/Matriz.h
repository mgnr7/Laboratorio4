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
