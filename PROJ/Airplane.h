#ifndef AIRPLANE_H
#define AIRPLANE_H

#include "Shape.h"
#include <list>

class Airplane : public Shape
{
public:
    Airplane();
    ~Airplane();

    virtual void draw();
    virtual void move(Matrix& transform);

private:
    std::list<Shape*> data;
};


#endif
