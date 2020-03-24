#ifndef RECTANGLE_H 
#define RECTANGLE_H

#include "Shape.h"
#include "Point.h"
#include "Line.h"

class Rectangle: public Shape
{
public:
	Rectangle(double x, double y, double height, double width, bool full = false);
	Rectangle(Point p, double height, double width, bool full = false);
	

	
	virtual void draw();
	virtual void move(Matrix& transform);

private:
	void drawFull();
	void drawSimple();


	Point p1, p2, p3, p4;
	bool full;
};

#endif
