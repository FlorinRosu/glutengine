/**
 * export LD_LIBRARY_PATH where libengineGlut.so is located 
libraries are in /usr/lib/i386-linux-gnu/ FOR x86
*/
#include <iostream>
#include <unistd.h>
#include <math.h>
#include "EngineGlut.h"

#define PI 3.1415
void drawSinus()
{
    EngineGlut e;
    
    //x from (-400,+400)
    //y = 100*sin(x)
    for (float i=0; i<360; i+=1)
    {
	float x = 180-i;
	float y = 100*sin(i/180*PI); 
	e.drawPoint(x, y);
    }
}

void drawLineAnimation()
{
    EngineGlut e;
    
    for (int i=-200; i<0; i+=10)
    {
	    e.drawClear();
	    e.drawLine(i,0,i+300,200); 
	    usleep(500000);
    }
}

int main(int argc, char ** argv)
{
    //init 
    initEngineGlut(argc, argv);
    
    //drawSinus();
    drawLineAnimation();
    std::cin.ignore();
}
