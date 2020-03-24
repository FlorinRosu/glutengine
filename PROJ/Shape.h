#ifndef SHAPE_H
#define SHAPE_H

#include "Matrix.h"
#include "EngineGlut.h"

class Shape
{
public:
	virtual void draw() = 0;
	virtual void move(Matrix& transform) = 0;
protected:
	static EngineGlut engine;
};


#endif
