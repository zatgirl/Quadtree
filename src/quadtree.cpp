#include <GL/glut.h>
#include <GL/freeglut_ext.h>
#include "gl_canvas2d.h"
#include "point.h"

Point *point;

void quadtree(int xini, int yini, int tamanho, int quadrante, int coordXPoint, int coordYPoint){
    for(int cont1 = 0; cont1 < point->qtd; cont1 ++){
        if((coordXPoint > xini) && (coordYPoint < yini)){
            CV::color(quadrante);
            CV::rect(xini,yini,xini+tamanho, yini+tamanho);
            return;
        }
    }
    quadtree(xini+0,         yini+0,         tamanho/2, 0);
    quadtree(xini+tamanho/2, yini+0,         tamanho/2, 1);
    quadtree(xini+0,         yini+tamanho/2, tamanho/2, 2);
    quadtree(xini+tamanho/2, yini+tamanho/2, tamanho/2, 3);
}
