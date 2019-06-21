#pragma once
class AlgoritmiSortare
{

protected:
	int *v;
	int index;

	double  Duration;


public:
	AlgoritmiSortare();
	void SortarePrinInserare();
	void SortarePrinInterschimbare();
	void SortareRapida();
	void StlSort();
	void GnomeSort();
	double DurataUltimaSortare();
	~AlgoritmiSortare();

private:
	int Divide(int, int);
	void Qsort(int, int);
	bool VectorSortat();
};

