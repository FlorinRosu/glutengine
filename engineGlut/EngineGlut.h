#ifndef ENGINE_GLUT
#define ENGINE_GLUT


//call first in main to initialize graphical window
void initEngineGlut(int argc, char **argv);

//instantiate to draw
class EngineGlut
{
public:
	EngineGlut();

	void drawPoint(int x, int y);
	void drawLine(int x1, int y1, int x2, int y2);
	void drawSurface(int x1, int y1, int x2, int y2, int x3, int y3);

	void drawClear();
};

#endif
