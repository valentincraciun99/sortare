#pragma once
 class AlgoritmiSortare
{
protected:
	int *v;
	int index;
	double duration;
	friend class Vector;

public:
	AlgoritmiSortare();
	void SortarePrinInserare();
	void SortarePrinInterschimbare();
	void SortareRapida();
	void StlSort();
	void GnomeSort();

	~AlgoritmiSortare();

private:
	int Divide(int,int);
	void Qsort(int, int); 
	bool VectorSortat();
};

