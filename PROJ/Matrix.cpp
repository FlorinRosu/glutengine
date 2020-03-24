#include <iostream>
#include <math.h>

#include "Matrix.h"

#define PI 3.14159265

Matrix::Matrix()
{
	for (int i=0; i<DIM; i++)
		for (int j=0; j<DIM; j++)
		{
			if (i==j)
				data[i][j] = 1;
			else
				data[i][j] = 0;
		}
}
Matrix Matrix::Translation(double x, double y)
{
	Matrix m;
	m.data[0][2] = x;
	m.data[1][2] = y;
	return m;
}
Matrix Matrix::Rotation(double angle)
{
	Matrix m;
	double radian = (angle * PI)/180;
	m.data[0][0] = cos(radian);
	m.data[0][1] = -sin(radian);
	m.data[1][0] = sin(radian);
	m.data[1][1] = cos(radian);
	return m;
}
Matrix Matrix::Scale(double x, double y)
{
	Matrix m;
	m.data[0][0] = x;
	m.data[1][1] = y;
	return m;
}
Matrix Matrix::Scale(double xy)
{
	return Scale(xy, xy);
}

void Matrix::print()
{
	for (int i=0; i<DIM; i++)
	{
		for(int j=0; j<DIM; j++)
			std::cout<<this->data[i][j]<<" ";
		std::cout<<std::endl;
	}
}
double Matrix::operator ()(int i, int j)
{
	if ((i<0) || (j<0) || (i>=DIM) || (j>=DIM))
		return 0;
	return data[i][j];
}
