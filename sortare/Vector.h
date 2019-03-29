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
	void Inserare(int);
	void Eliminare(int);
	void SortarePrinInserare();
	void SortarePrinInterschimbare();
	double DurataUltimaSortare();
	int Element(int);
};

