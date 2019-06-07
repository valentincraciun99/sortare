// sortare.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
PCH_H
using namespace std;

int main()
{
	int a = 30500;
	Vector* v=new Vector(a);

	

	

	for (int i = 0; i <= 30000; i++)
	{
		v->InserareLaFinal(rand());
	}
	v->SortarePrinInserare();

	

	cout<<"\n"<<v->DurataUltimaSortare();

	//cout << ;

	system("pause");
    
}
