// sortare.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int k;
	Vector *vector = new Vector(100);

	vector->Inserare(5);
	vector->Inserare(2);
	//cout<<vector->DurataUltimaSortare();
	vector->Inserare(2);
	vector->Inserare(2);
	vector->Inserare(2);
	



	vector->SortarePrinInserare();
	cout << vector->ElementLaIndicele(0);
	vector->Eliminare(2);
	
	vector->~Vector();
	

	cin >> k;
	return 0;
}
