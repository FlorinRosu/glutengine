#include "Airplane.h"
#include "Triangle.h"
#include "Rectangle.h"

Airplane::Airplane()
{
    data.clear();//defence programming

    Line* front = new Line(0,0,0,-5);
    this->data.push_back(front);

    Triangle* cabine = new Triangle(0,-5, -10, -25, 10, -25, true);
    this->data.push_back(cabine);

    Rectangle* frontWings = new Rectangle(-30,-25,10,60,true);
    this->data.push_back(frontWings);
    
    Rectangle* middlePlane= new Rectangle(-10,-35,20,20,true);
    this->data.push_back(middlePlane);
    
    Rectangle* backwings= new Rectangle(-20,-55,10,40,true);
    this->data.push_back(backwings);

    Rectangle* backofThePlane = new Rectangle(-10,-65,5,20, true);
    this->data.push_back(backofThePlane);
}

Airplane::~Airplane()
{
    std::list<Shape*>::iterator it;
    for (it=this->data.begin(); it != this->data.end(); it++)
    {
	delete (*it);
    }

    this->data.clear();
}

void Airplane::draw()
{
    std::list<Shape*>::iterator it;
    for (it=this->data.begin(); it != this->data.end(); it++)
    {
	(*it)->draw();
    }

}

void Airplane::move(Matrix& transform)
{
    std::list<Shape*>::iterator it;
    for (it=this->data.begin(); it != this->data.end(); it++)
    {
	(*it)->move(transform);
    }

}
