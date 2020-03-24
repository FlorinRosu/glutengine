#include "Triangle.h"

Triangle::Triangle(double x1, double y1, double x2, double y2, double x3, double y3, bool full):
	p1(x1,y1),
	p2(x2,y2),
	p3(x3,y3)
{
	this->full = full;
}
Triangle::Triangle(Point p1, Point p2, Point p3, bool full)
{
	this->p1 = p1;
	this->p2 = p2;
	this->p3 = p3;
	this->full = full;
}


void Triangle::draw()
{
	if (this->full)
		this->drawFull();
	else
		this->drawSimple();
}

void Triangle::move(Matrix& transform)
{
	p1.move(transform);
	p2.move(transform);
	p3.move(transform);
}

void Triangle::drawFull()
{
	engine.drawSurface(p1.getX(), p1.getY(), p2.getX(), p2.getY(), p3.getX(), p3.getY());
}
void Triangle::drawSimple()
{
	Line l1(this->p1, this->p2);
	Line l2(this->p2, this->p3);
	Line l3(this->p1, this->p3);
	l1.draw();
	l2.draw();
	l3.draw();
}
