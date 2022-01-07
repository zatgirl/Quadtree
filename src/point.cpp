#include <GL/glut.h>
#include <GL/freeglut_ext.h>
#include "gl_canvas2d.h"
#include "point.h"

void Point::printPoint(double x, double y){
    CV::circleFill(x, y, 20, 5);
}
