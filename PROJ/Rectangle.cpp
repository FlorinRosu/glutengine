#include "Rectangle.h"
#include "Line.h"

Rectangle::Rectangle(double x, double y, double height, double width, bool full):
	p1(x,y),
	p2(x,y-height),
	p3(x+width,y-height),
	p4(x+width,y) 
{
	this->full = full;
}

Rectangle::Rectangle(Point p, double height, double width, bool full):
	p1(p),
	p2(p.getX(),p.getY()-height),
	p3(p.getX()+width,p.getY()-height),
	p4(p.getX()+width,p.getY()) 
{
	this->full = full;
}


void Rectangle::draw()
{
	if (this->full)
		this->drawFull();
	else
		this->drawSimple();
}

void Rectangle::move(Matrix& transform)
{
	p1.move(transform);
	p2.move(transform);
	p3.move(transform);
	p4.move(transform);
}

void Rectangle::drawFull()
{
	engine.drawSurface(p1.getX(), p1.getY(), p2.getX(), p2.getY(), p3.getX(), p3.getY());
	engine.drawSurface(p1.getX(), p1.getY(), p4.getX(), p4.getY(), p3.getX(), p3.getY());
}
void Rectangle::drawSimple()
{
	Line l1(this->p1, this->p2);
	Line l2(this->p2, this->p3);
	Line l3(this->p3, this->p4);
	Line l4(this->p1, this->p4);

	l1.draw();
	l2.draw();
	l3.draw();
	l4.draw();
}
