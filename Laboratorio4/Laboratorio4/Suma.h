#pragma once

#include "Operando.h"

template <typename T>
class Suma : public Operando <typename T> 
{
public:
	Suma();
	~Suma();
};

template<typename T>
inline Suma<T>::Suma()
{
}

template<typename T>
inline Suma<T>::~Suma()
{
}
