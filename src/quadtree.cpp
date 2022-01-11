#include <GL/glut.h>
#include <GL/freeglut_ext.h>
#include "gl_canvas2d.h"
#include "point.h"
#include "quadtree.h"

void recepPoint(int pontosX, int pontosY){
    pointX[i] = pontosX;
    pointY[i] = pontosY;
    i++;
}

void testQuad (int limite, int capacidade){
    for (int largura = 0; largura < limite; largura ++){
        for (int altura = 0; altura < limite; altura++){
            if((pointX[largura] == largura) && (pointX[altura] == altura)){
                points++;
            }
        }
    }
    if (points > capacidade){
        quadtree();
    }
}

void quadtree(int nw, int ns, int sw, int sd){

}
