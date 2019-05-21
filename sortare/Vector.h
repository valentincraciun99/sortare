#pragma once
#include "AlgoritmiSortare.h"
class Vector:AlgoritmiSortare
{
public:
	Vector(int);
	~Vector();
	void Inserare(int);
	void Eliminare(int);
	double DurataUltimaSortare();
	int ElementLaIndicele(int);
	
};

