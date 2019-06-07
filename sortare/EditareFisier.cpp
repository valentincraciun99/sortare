#include "pch.h"
#include "EditareFisier.h"
#include <fstream>


EditareFisier::EditareFisier()
{
}


EditareFisier::~EditareFisier()
{
}

void EditareFisier::CitireDinFisier(Vector v,string path)
{
	int aux;
	ifstream f(path);
	while (f >> aux)
	{
		v.Inserare(aux);
	}
	
}
