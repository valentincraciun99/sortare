#include "pch.h"
#include<iostream>
#include<algorithm>

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

bool AlgoritmiSortare::VectorSortat()
{

	for (int i = 1; i < index; i++)
	{
		if (v[i] < v[i - 1]) return false;
	}

	return true;
}
void AlgoritmiSortare::SortareRapida()
{
	std::clock_t start;
	start = std::clock();
	if (VectorSortat() == true)
	{
		duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;
		return;
	}

	Qsort(0, index - 1); std::cout << index - 1;
	duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;
}

void AlgoritmiSortare::StlSort()
{
	std::clock_t start;
	start = std::clock();
	std::sort(v, v + index);
	duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;
}

void AlgoritmiSortare::GnomeSort()
{
	// A function to sort the algorithm using gnome sort 
	std::clock_t start;
	start = std::clock();
		int index = 0;

		while (index < this->index) {
			if (index == 0)
				index++;
			if (v[index] >= v[index - 1])
				index++;
			else {
				swap(v[index], v[index - 1]);
				index--;
			}
		}
		duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;
}

void AlgoritmiSortare::Qsort(int p, int q)
{
	int m = Divide(p, q);

	if (m - 1 > p) Qsort(p, m - 1);
	if (m + 1 < q) Qsort(m + 1, q);
}
int AlgoritmiSortare::Divide(int p,int q)
{
	int st = p;
	int dr=q;
	int x = v[p];
	while (st<dr)
	{
		while (st < dr && v[dr] >= x) dr--;
		v[st] = v[dr];
		while (st < dr && v[st] <= x) st++;
		v[dr] = v[st];

		
	}
	v[st] = x;
	return st;
}

