#ifndef AIRPLANE_SIMPLE_H
#define AIRPLANE_SIMPLE_H

#include "Point.h"
#include "Line.h"
#include "Triangle.h"
#include "Shape.h"
#include "Matrix.h"

class AirplaneSimple : public Shape
{
public:
    AirplaneSimple();
    ~AirplaneSimple();

    virtual void draw();
    virtual void move(Matrix& transform);

private:


    Point* points[10];
    int nrPoints;

    Line* lines[10];
    int nrLines;

    Triangle* triangles[10];
    int nrTriangles;
};

#endif
