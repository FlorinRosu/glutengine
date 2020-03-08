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
    e.drawLine(0,0,100,100);
    std::cin.ignore();
}
