#pragma once
#include "ofMain.h"
#include <iostream>

class Matrix
{
private:
	int Mat[3][3];

public:
	//Construtores
	Matrix();
	void Matrix::Ident();
	void Matrix::Floats(float a, float b, float c, float d, float e, float f, float g, float h, float i);

	float getDeterm();
	Matrix getInversa();
	void getMul();
	//Sobrecargas
	Matrix operator *(Matrix mat);

	~Matrix();
};