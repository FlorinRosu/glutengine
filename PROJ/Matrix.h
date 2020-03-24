#ifndef MATRIX_H
#define MATRIX_H

#define DIM 3
class Matrix
{
public:
	static Matrix Translation(double x, double y = 0);
	static Matrix Rotation(double angle);
	static Matrix Scale(double x, double y);
	static Matrix Scale(double xy);

	void print();
	double operator ()(int i, int j);
private:
	Matrix();
	double data[DIM][DIM];
};
#endif
