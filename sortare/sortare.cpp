// sortare.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	Vector *vector = new Vector(3000000);
	
	vector->GenerareElementeRandom();

	
	cout << vector->ElementLaIndicele(0) << "\n";
	//vector->GnomeSort();
	vector->SortareRapida();

	cout <<"\n"<< vector->ElementLaIndicele(0)<<"\n";
	
	
	cout<<vector->DurataUltimaSortare()<<"\n";

	
	
	
/*
	for (int i = 0; i <= 98000; i++)
	{

		cout<<vector->ElementLaIndicele(i)<<"\n";
		system("pause");
	}*/

	system("pause");
	return 0;
}
