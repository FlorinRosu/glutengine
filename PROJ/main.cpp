/**
 * export LD_LIBRARY_PATH where libengineGlut.so is
libraries are in /usr/lib/i386-linux-gnu/ FOR x86
*/
#include <iostream>
#include <unistd.h>
#include "EngineGlut.h"
#include "Point.h"
#include "Line.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Airplane.h"
#include "AirplaneSimple.h"
#include "Matrix.h"
#include "Pisica.h"


void animation(Shape* shape)
{
	EngineGlut engine;
	engine.drawClear();

	Matrix transT = Matrix::Translation(2,0);

	for (int i=0; i<120; i++)
	{
		engine.drawClear();
		shape->move(transT);
		shape->draw();
		usleep(20 * 1000);
	}

	Matrix transR  = Matrix::Rotation(2);
	for (int i=0; i<180; i++)//full circle
	{
		engine.drawClear();
		shape->move(transR);
		shape->draw();
		usleep(20 * 1000);
	}
}
void testPoint()
{
	Point point;

	animation(&point);
}

void testLine()
{
	Line line(0,0,0,50);

	animation(&line);
}

void testTriangle(bool full)
{
	Triangle triangle(0,0,-20,-20,20,-20, full);

	animation(&triangle);

}
void testTriangle()
{
	testTriangle(false);
	testTriangle(true);
}

void testRectangle(bool full)
{
	Rectangle rectangle(0,0,20,-20, full);

	animation(&rectangle);
}
void testRectangle()
{
	testRectangle(false);
	testRectangle(true);
}

void testAirplaneSimple()
{
	AirplaneSimple airplane;
	animation(&airplane);

}

void testAirplane()
{
    Airplane airplane;

    animation(&airplane);
}

void testCat()
{
	Pisica pisica;
	
	animation(&pisica);

}
int main(int argc, char ** argv)
{
	int sleepTime = 1;
	initEngineGlut(argc, argv);

	//testPoint();
	//testLine();
	//testTriangle();
	//testRectangle();
	//testAirplaneSimple();
	//testAirplane();
	testCat();
	std::cin.ignore();
}
