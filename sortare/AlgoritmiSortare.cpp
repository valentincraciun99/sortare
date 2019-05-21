#include "pch.h"

AlgoritmiSortare::AlgoritmiSortare()
{
}


AlgoritmiSortare::~AlgoritmiSortare()
{
}
void AlgoritmiSortare::SortarePrinInserare()
{
	std::clock_t start;
	start = std::clock();
	int aux;
	for (int i = 0; i < index; i++)
	{
		for (int j = i + 1; j < index; j++)
		{
			if (v[i] < v[j])
			{
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}
	duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;
}
void AlgoritmiSortare::SortarePrinInterschimbare()
{
	std::clock_t start;
	start = std::clock();
	int aux, swap;
	do
	{
		swap = 0;
		for (int i = 1; i < index; i++)
		{
			if (v[i] < v[i - 1])
			{
				aux = v[i];
				v[i] = v[i - 1];
				v[i - 1] = aux;
				swap = 1;

			}
		}

	} while (swap);
	duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;
}

void AlgoritmiSortare::SortareRapida()
{



}