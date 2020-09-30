#pragma once

#include "Operando.h"

template <typename T>
class Double : Operando <typename T> 
{
public:
	Double();
	~Double();
};

template<typename T>
inline Double<T>::Double()
{
}

template<typename T>
inline Double<T>::~Double()
{
}
