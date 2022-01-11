#ifndef __QUADTREE__
#define __QUADTREE__
#include <GL/glut.h>
#include <GL/freeglut_ext.h>
#include "point.h"

int pointX[512], pointY[512], i = 0, points = 0;

class Quadtree {
public:
    int limite;
    int capacidade;
    int pontos[];
};

void recepPoint (int pontosX, int pontosY);

void testQuad (int limite, int capacidade);

void quadtree ();





#endif // __QUADTREE_H__
