#include "Pisica.h"
#include <iostream>
#include "EngineGlut.h"
#include "Point.h"
#include "Line.h"
#include "Triangle.h"
Pisica::Pisica()
{
    Point p(0,0),c1(-50,60),c2(50,60),b1(-80,-150),b2(80,-150),u1(-30,60),u2(30,60),v1(-40,80),v2(40,80),t(130,-70);
    Point n1(-5,30),n2(5,30),n3(0,22),n4(0,17),n5(-6,17),n6(6,17);
    Point o1(-23,43),o2(-17,48),o3(-12,43),o4(12,43),o5(18,48),o6(23,43);
    Point z1(-8,-17),z2(8,-17);
    Point f1(-7,-22),f2(0,-17),f3(-7,-12),f4(7,-22),f5(7,-12);
    Point C1(76,-145),C2(127,-65);
    this->cap=new Triangle(p,c1,c2,false);
    this->corp=new Triangle(p,b1,b2,false);
    this->ureche_st=new Triangle(c1,u1,v1,false);
    this->ureche_dr=new Triangle(c2,u2,v2,false);
    this->coada=new Line(b2,t);
    this->coada2=new Line(C1,C2);
    this->coada3=new Line(t,C2);
    this->nas=new Triangle(n1,n2,n3,false);
    this->g1=new Line(n3,n4);
    this->g2=new Line(n5,n6);
    this->ochi_st1=new Line(o1,o2);
    this->ochi_st2=new Line(o2,o3);
    this->ochi_dr1=new Line(o4,o5);
    this->ochi_dr2=new Line(o5,o6);
    this->zgarda=new Line(z1,z2);
    this->funda1=new Triangle(f1,f2,f3,true);
    this->funda2=new Triangle(f4,f2,f5,true);
}

Pisica::~Pisica()
{
    //dtor
}
void Pisica::draw()
{
    cap->draw();
    corp->draw();
    ureche_st->draw();
    ureche_dr->draw();
    coada->draw();
    coada2->draw();
    coada3->draw();
    nas->draw();
    g1->draw();
    g2->draw();
    ochi_st1->draw();
    ochi_st2->draw();
    ochi_dr1->draw();
    ochi_dr2->draw();
    zgarda->draw();
    funda1->draw();
    funda2->draw();
}
void Pisica::move(Matrix& transform)
{
    cap->move(transform);
    corp->move(transform);
    ureche_st->move(transform);
    ureche_dr->move(transform);
    nas->move(transform);
    g1->move(transform);
    g2->move(transform);
    coada->move(transform);
    coada2->move(transform);
    coada3->move(transform);
    ochi_dr1->move(transform);
    ochi_dr2->move(transform);
    ochi_st1->move(transform);
    ochi_st2->move(transform);
    zgarda->move(transform);
    funda1->move(transform);
    funda2->move(transform);
}
