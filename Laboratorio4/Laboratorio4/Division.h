#pragma once

#include "Operando.h"

template <typename T>
class Division : Operando <typename T> 
{
public:
	Division();
	~Division();
};

template<typename T>
inline Division<T>::Division()
{
}

template<typename T>
inline Division<T>::~Division()
{
}
