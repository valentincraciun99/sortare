// sortare.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	Vector *vector = new Vector(100000);
	//
	for (int i = 0; i <= 16999; i++)
	{
		vector->Inserare(rand());
	}

	//vector->SortarePrinInterschimbare();
	vector->SortareRapida();
	cout<<vector->DurataUltimaSortare();

	
	
/*
	for (int i = 0; i <= 98000; i++)
	{

		cout<<vector->ElementLaIndicele(i)<<"\n";
		system("pause");
	}*/

	system("pause");
	return 0;
}
