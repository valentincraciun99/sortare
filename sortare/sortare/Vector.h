#pragma once
class Vector
{
private:
	int *v;
	int index;
	double duration;

public:
	Vector(int);
	~Vector();
	void InserareLaFinal(int element);
	void Eliminare(int);
	void SortarePrinInserare();
	void SortarePrinInterschimbare();
	double DurataUltimaSortare();
	int Element(int);
};

