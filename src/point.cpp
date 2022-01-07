#include <GL/glut.h>
#include <GL/freeglut_ext.h>
#include "gl_canvas2d.h"
#include "point.h"

void QPoint::printPoint(double x, double y){
        CV::color(0,0,0);
        CV::circleFill(x, y, 5, 20);
}
