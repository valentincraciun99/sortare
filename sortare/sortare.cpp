// sortare.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "sortare.h"
#define vector (*vector)
using namespace std;
int main()
{
	Vector vector = new Vector(3000000);
	
	vector.GenerareElementeRandom();

	auto a = vector[0];
	cout << a;

	vector[0] = 5;
	a = vector[0];
	cout << a;

	//vector->GnomeSort();
	//vector->SortareRapida();

	//cout <<"\n"<< vector[0]<<"\n";
	
	
	//cout<<vector->DurataUltimaSortare()<<"\n";

	
	
	
/*
	for (int i = 0; i <= 98000; i++)
	{

		cout<<vector->ElementLaIndicele(i)<<"\n";
		system("pause");
	}*/

	system("pause");
	return 0;
}
