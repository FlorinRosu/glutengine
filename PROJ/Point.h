#ifndef POINT_H
#define POINT_H

#include "Shape.h"

class Point : public Shape
{
    public:
        Point();
        Point(double x, double y);
        ~Point();

	double getX();
	double getY();
        void print();

        virtual void draw();
	virtual void move(Matrix& transform);
    protected:
    private:
	double coord[DIM];
	//X = coord[0]; 
	//Y = coord[1]; 
	//Z = coord[2] == 1;always //for transformation purpose
};

#endif // POINT_H
