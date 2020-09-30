#pragma once

#include "Operando.h"

template <typename T>
class Resta : Operando <typename T> 
{
public:
	Resta();
	~Resta();
};

template<typename T>
inline Resta<T>::Resta()
{
}

template<typename T>
inline Resta<T>::~Resta()
{
}
