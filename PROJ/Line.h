#ifndef LINE_H
#define LINE_H

#include "Shape.h"
#include "Point.h"

class Line : public Shape
{
public:
	Line(double x1, double y1, double x2, double y2);
	Line(Point p1, Point p2);

	
	virtual void draw();
	virtual void move(Matrix& transform);

private:
	Point p1, p2;
};

#endif
