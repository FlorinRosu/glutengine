#include "EngineGlut.h"
#include "GlutData.h"
#include "GlutDrawing.h"


void initEngineGlut(int argc, char **argv)
{
    initGlutDrawing(argc, argv);
}


EngineGlut::EngineGlut()
{
    //by default (0,0) is corner down left - to get to center we add WIN_MAX_X/2 and WIN_MAX_Y/2
}

void EngineGlut::drawPoint(int x, int y)
{
    x += WIN_MAX_X/2;
    y += WIN_MAX_Y/2;

    pthread_mutex_lock(&lock);

    GlutData::getInstance()->addPoint(x,y);

    pthread_mutex_unlock(&lock);
}

void EngineGlut::drawLine(int x1, int y1, int x2, int y2)
{
    x1 += WIN_MAX_X/2;
    y1 += WIN_MAX_Y/2;
    x2 += WIN_MAX_X/2;
    y2 += WIN_MAX_Y/2;

    pthread_mutex_lock(&lock);

    GlutData::getInstance()->addLine(x1,y1, x2, y2);

    pthread_mutex_unlock(&lock);
}

void EngineGlut::drawSurface(int x1, int y1, int x2, int y2, int x3, int y3)
{
    x1 += WIN_MAX_X/2;
    y1 += WIN_MAX_Y/2;
    x2 += WIN_MAX_X/2;
    y2 += WIN_MAX_Y/2;
    x3 += WIN_MAX_X/2;
    y3 += WIN_MAX_Y/2;

    pthread_mutex_lock(&lock);

    GlutData::getInstance()->addTriangle(x1,y1, x2, y2, x3, y3);

    pthread_mutex_unlock(&lock);
}
void EngineGlut::drawSurface(int x1, int y1, int x2, int y2, int x3, int y3, Color c)
{
    x1 += WIN_MAX_X/2;
    y1 += WIN_MAX_Y/2;
    x2 += WIN_MAX_X/2;
    y2 += WIN_MAX_Y/2;
    x3 += WIN_MAX_X/2;
    y3 += WIN_MAX_Y/2;

    float r,g,b;
    if (c == COLOR_A)//done
    {
	r = 1; g = 0.5; b = 0;
    }
    if (c == COLOR_B)//done
    {
	r = 0.9; g = 0.13; b = 0.13;
    }
    if (c == COLOR_C)//done
    {
	r = 0; g = 0; b = 1;
    }
    if (c == COLOR_D)//done
    {
	r = 1; g = 0.43; b = 0.68;
    }
    if (c == COLOR_E)//done
    {
	r = 0; g = 1; b = 0;
    }
    if (c == COLOR_F)//done
    {
	r = 1; g = 1; b = 1;
    }
    if (c == COLOR_G)//done
    {
	r = 0.67; g = 0.91; b = 0.91;
    }
    if (c == COLOR_H)//done
    {
	r = 1; g = 0.11; b = 0.68;
    }
    if (c == COLOR_I)//done
    {
	r = 1; g = 1; b = 0;
    }
    if (c == COLOR_J)//done
    {
	r = 0.62; g = 0.37; b = 0.62;
    }
    if (c == COLOR_K)//done
    {
	r = 0.56; g = 0.73; b = 0.56;
    }
    if (c == COLOR_L)//done
    {
	r = 0.32; g = 0.32; b = 0.32;
    }
    pthread_mutex_lock(&lock);

    GlutData::getInstance()->addTriangle(x1,y1, x2, y2, x3, y3, r, g, b);

    pthread_mutex_unlock(&lock);
}

void EngineGlut::drawClear()
{
    pthread_mutex_lock(&lock);

    GlutData::getInstance()->removeAll();

    pthread_mutex_unlock(&lock);
}

