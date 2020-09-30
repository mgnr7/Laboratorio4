#pragma once

#include "Operando.h"

template <typename T>
class Fraccion : Operando <typename T> 
{
public:
	Fraccion();
	~Fraccion();
};

template<typename T>
inline Fraccion<T>::Fraccion()
{
}

template<typename T>
inline Fraccion<T>::~Fraccion()
{
}
