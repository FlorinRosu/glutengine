#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"
#include "Point.h"
#include "Line.h"

class Triangle: public Shape
{
public:
	Triangle(double x1, double y1, double x2, double y2, double x3, double y3, bool full = false);
	Triangle(Point p1, Point p2, Point p3, bool full);

	
	virtual void draw();
	virtual void move(Matrix& transform);

private:
	void drawFull();
	void drawSimple();


	Point p1, p2, p3;
	bool full;
};

#endif
