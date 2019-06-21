#pragma once
#include "AlgoritmiSortare.h"

class Vector :public AlgoritmiSortare
{
public:

	int var;
	Vector(int);
	~Vector();
	void Inserare(int);
	void Eliminare(int);
	
	int & operator[](int index_element);
	void GenerareElementeRandom();
	int Dimensiune();
	void Init();



};

