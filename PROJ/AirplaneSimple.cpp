#include "AirplaneSimple.h"

AirplaneSimple::AirplaneSimple()
{
	nrPoints = 0;
	nrLines = 0;
	nrTriangles = 0;

	triangles[nrTriangles++] = new Triangle(0,0,-10,-20,10,-20);
	triangles[nrTriangles++] = new Triangle(-30,-20, -30, -40, 30, -40);
	triangles[nrTriangles++] = new Triangle(-30,-20, 30, -20, 30, -40);
	lines[nrLines++] = new Line(-10, -40, -10, -70);
	lines[nrLines++] = new Line(10, -40, 10, -70);
	triangles[nrTriangles++] = new Triangle(-20,-70, -20, -80, 20, -80);
	triangles[nrTriangles++] = new Triangle(-20,-70, 20, -70, 20, -80);
	points[nrPoints++] = new Point(-20, -30);
	points[nrPoints++] = new Point(20, -30);
}
AirplaneSimple::~AirplaneSimple()
{

	int i;
	for (i=0; i<nrPoints; i++)
		delete points[i];


	for (i=0; i<nrLines; i++)
		delete lines[i];
	
	for (i=0; i<nrTriangles; i++)
		delete triangles[i];
	
}

void AirplaneSimple::draw()
{
	int i;
	for (i=0; i<nrPoints; i++)
		points[i]->draw();


	for (i=0; i<nrLines; i++)
		lines[i]->draw();
	
	for (i=0; i<nrTriangles; i++)
		triangles[i]->draw();
}

void AirplaneSimple::move(Matrix& transform)
{
	int i;
	for (i=0; i<nrPoints; i++)
		points[i]->move(transform);


	for (i=0; i<nrLines; i++)
		lines[i]->move(transform);
	
	for (i=0; i<nrTriangles; i++)
		triangles[i]->move(transform);
}
