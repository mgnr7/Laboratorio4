#pragma once

#include "Operando.h"

template <typename T>
class Multiplicacion : Operando <typename T> 
{
public:
	Multiplicacion();
	~Multiplicacion();
};

template<typename T>
inline Multiplicacion<T>::Multiplicacion()
{
}

template<typename T>
inline Multiplicacion<T>::~Multiplicacion()
{
}
