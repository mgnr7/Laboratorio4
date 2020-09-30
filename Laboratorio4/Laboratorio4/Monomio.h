#pragma once

#include "Operando.h"

template <typename T>
class Monomio : public Operando <typename T> 
{
public:
	Monomio();
	~Monomio();
};

template<typename T>
inline Monomio<T>::Monomio()
{
}

template<typename T>
inline Monomio<T>::~Monomio()
{
}
