#pragma once
 class AlgoritmiSortare
{
protected:
	int *v;
	int index;
	double duration;

public:
	AlgoritmiSortare();
	void SortarePrinInserare();
	void SortarePrinInterschimbare();
	void SortareRapida();
	~AlgoritmiSortare();

private:
	int Divide(int,int);
	void Qsort(int, int);
};

