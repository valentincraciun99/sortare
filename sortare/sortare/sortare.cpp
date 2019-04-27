// sortare.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
PCH_H
using namespace std;

int main()
{
	Vector* v=new Vector(30005);

	

	

	for (int i = 0; i <= 30000; i++)
	{
		v->Inserare(rand());
	}
	v->SortarePrinInserare();

	

	cout<<"\n"<<v->DurataUltimaSortare();

	//cout << ;

	system("pause");
    
}
