#include "Line.h"

Line::Line(double x1, double y1, double x2, double y2):
	p1(x1,y1),
	p2(x2,y2)
{
}
Line::Line(Point p1, Point p2)
{
	this->p1 = p1;
	this->p2 = p2;
}

void Line::draw()
{
	engine.drawLine(this->p1.getX(), this->p1.getY(), this->p2.getX(), this->p2.getY());
}

void Line::move(Matrix& transform)
{
	this->p1.move(transform);
	this->p2.move(transform);
}
