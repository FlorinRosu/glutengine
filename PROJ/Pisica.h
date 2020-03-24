#ifndef PISICA_H
#define PISICA_H
#include <iostream>
#include "EngineGlut.h"
#include "Line.h"
#include "Triangle.h"
#include "Shape.h"

class Pisica:public Shape
{
    public:
        Pisica();
        virtual ~Pisica();
        void draw();
	virtual void move(Matrix& transform);

    protected:

    private:
        Triangle *cap,*corp,*ureche_st,*ureche_dr;
        Line *coada,*coada2,*coada3,*g1,*g2;
        Triangle *nas;
        Line *ochi_st1,*ochi_st2,*ochi_dr1,*ochi_dr2;
        Triangle *funda1,*funda2;
        Line *zgarda;
};

#endif // PISICA_H
