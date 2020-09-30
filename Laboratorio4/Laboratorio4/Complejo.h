#pragma once

#include "Operando.h"

template <typename T>
class Complejo : Operando <typename T> 
{
public:
	Complejo();
	~Complejo();
};

template<typename T>
inline Complejo<T>::Complejo()
{
}

template<typename T>
inline Complejo<T>::~Complejo()
{
}
