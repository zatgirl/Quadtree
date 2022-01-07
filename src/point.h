#ifndef __POINT__
#define __POINT__
#include <GL/glut.h>
#include <GL/freeglut_ext.h>

#define P 50

class Point{
public:
 int qtd = P;
 double x;
 double y;
 int coordX[P] = {0};
 int coordY[P] = {0};
 void printPoint(double x, double y);
};
extern Point *point;
#endif // __POINT_H__

