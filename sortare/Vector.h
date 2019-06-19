#pragma once
#include "AlgoritmiSortare.h"

 class Vector:public AlgoritmiSortare
{
public:
	
	int var;
	Vector(int);
	~Vector();
	void Inserare(int);
	void Eliminare(int);
	double DurataUltimaSortare();
	int & operator[](int index_element);
	void GenerareElementeRandom();


	
};

