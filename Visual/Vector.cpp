#include "stdafx.h"
#include "pch.h"
#include "Vector.h"
#include <iostream>


Vector::Vector(int numar_elemente)
{
	v = new int[numar_elemente];
	index = 0;
}

int Vector:: Dimensiune()
{
	return index;
}

void Vector::Init()
{
	index = 0;
}

void Vector::Inserare(int element)
{

	v[index++] = element;
	//std::cout << "a fost adaugat elementul " << v[index-1] << " pe pozitia " << index - 1<<"\n";
}
void Vector::Eliminare(int nr_elemente)
{
	if (index - nr_elemente >= 0)
		index -= nr_elemente;

}


int& Vector::operator [](int index_element)
{

	return v[index_element];

}

void Vector::GenerareElementeRandom()
{
	srand(time(NULL));
	index = (int)rand() % 20051;
	for (int i = 0; i < index; i++)
	{
		v[i] = rand();
		//cout << v[i] << " ";
	}

}






Vector::~Vector()
{
}
