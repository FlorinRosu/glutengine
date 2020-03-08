#ifndef ENGINE_GLUT
#define ENGINE_GLUT

enum Color
{
    COLOR_A = 0,
    COLOR_B,
    COLOR_C,
    COLOR_D,
    COLOR_E,
    COLOR_F,
    COLOR_G,
    COLOR_H,
    COLOR_I,
    COLOR_J,
    COLOR_K,
    COLOR_L,
    COLOR_MAX,
};

void initEngineGlut(int argc, char **argv);

class EngineGlut
{
public:
	EngineGlut();

	void drawPoint(int x, int y);
	void drawLine(int x1, int y1, int x2, int y2);
	void drawSurface(int x1, int y1, int x2, int y2, int x3, int y3);
	void drawSurface(int x1, int y1, int x2, int y2, int x3, int y3, Color c);

	void drawClear();


};

#endif
