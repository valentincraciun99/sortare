#include "pch.h"
#include "Vector.h"


Vector::Vector(int numar_elemente)
{
	v = new int(numar_elemente);
	index = 0;
}

void Vector::Inserare(int element)
{
	v[index] = element;
	index++;
}
void Vector::Eliminare(int nr_elemente)
{
	if (index - nr_elemente >= 0)
		index -= nr_elemente;

}
void Vector::SortarePrinInserare()
{
	std::clock_t start;
	start = std::clock();
	int aux;
	for (int i = 1; i < index; i++)
	{
		for (int j = i + 1; j <= index; j++)
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
void Vector::SortarePrinInterschimbare()
{
	std::clock_t start;
	start = std::clock();
	int aux,swap;
	do
	{
		swap = 0;
		for (int i = 2; i <= index; i++)
		{
			if (v[i] < v[i - 1])
			{
				aux = v[i];
				v[i] = v[i-1];
				v[i-1] = aux;
				swap = 1;

			}
		}

	} while (swap);
	duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;
}
double Vector::DurataUltimaSortare()
{
	return duration;
}
int Vector::Element(int index_element)
{
	return v[index_element];
}




Vector::~Vector()
{
}
