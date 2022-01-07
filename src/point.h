#ifndef __POINT__
#define __POINT__
#include <GL/glut.h>
#include <GL/freeglut_ext.h>

#define P 50

namespace QPoint{
    class Point{
    public:
     int coordX[P] = {0};
     int coordY[P] = {0};
    };
    void printPoint(double x, double y);
}
#endif // __POINT_H__

