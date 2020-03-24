#include <iostream>
#include "Point.h"

#include "EngineGlut.h"


Point::Point()
{
	this->coord[0] = this->coord[1] = 0;
	this->coord[2] = 1;
}

Point::Point(double x, double y)
{
	this->coord[0] = x;
	this->coord[1] = y;

	this->coord[2] = 1;
}

Point::~Point()
{
    //dtor
}

double Point::getX()
{
	return this->coord[0];
}
double Point::getY()
{
	return this->coord[1];
}

void Point::print()
{
    std::cout<<"Point at coordinates " <<this->coord[0]<<" and "<<this->coord[1]<<std::endl;
}

void Point::draw()
{
	//engine from Shape
    this->engine.drawPoint(this->coord[0], this->coord[1]);
}

void Point::move(Matrix& transform)
{
	double newcoord[DIM];
	//multiple matrix 3*3 with vector 3
	for (int i=0; i<DIM; i++)
	{
		newcoord[i] = 0;
		for (int j=0; j<DIM; j++)
		{
			newcoord[i] += this->coord[j] * transform(i,j);
		}
	}

	//save the new coordinates
	for (int i=0; i<DIM; i++)
		this->coord[i] = newcoord[i];
}
