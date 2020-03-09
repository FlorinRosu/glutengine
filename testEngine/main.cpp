/**
 * export LD_LIBRARY_PATH where libengineGlut.so is
libraries are in /usr/lib/i386-linux-gnu/ FOR x86
*/
#include <iostream>
#include <unistd.h>
#include "EngineGlut.h"

int main(int argc, char ** argv)
{
    int sleepTime = 1;
    initEngineGlut(argc, argv);

    EngineGlut e;
    for (int i=0; i<100; i++)
    {
	    e.drawClear();
	    e.drawLine(0,2*i,100,3*i);
	    usleep(100000);
    }
    std::cin.ignore();
}
