/*********************************************************************
// Canvas para desenho, criada sobre a API OpenGL. Nao eh necessario conhecimentos de OpenGL para usar.
//  Autor: Cesar Tadeu Pozzer
//         05/2020
//
//  Pode ser utilizada para fazer desenhos, animacoes, e jogos simples.
//  Tem tratamento de mouse e teclado
//  Estude o OpenGL antes de tentar compreender o arquivo gl_canvas.cpp

//  Todos os arquivos do projeto devem ser .cpp
//
//  Versao 2.0
//
// *********************************************************************/

#include <GL/glut.h>
#include <GL/freeglut_ext.h> //callback da wheel do mouse.

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "gl_canvas2d.h"
#include "rectangle.h"
#include "point.h"
#include "quadtree.h"

//variaveis globais
int screenWidth = 512, screenHeight = 512; //largura e altura inicial da tela. Alteram com o redimensionamento de tela.

int qtdPoint = 0;
double logQt;
QPoint::Point*point = new QPoint::Point();

void render()
{
    QRect::Rect*limite = new QRect::Rect();
    Quadtree*quadtree = new Quadtree();
    Quadtree*northWest = new Quadtree();
    Quadtree*northEast = new Quadtree();
    Quadtree*southWest = new Quadtree();
    Quadtree*southEast = new Quadtree();

    limite->x = 250;
    limite->y = 250;
    limite->h = 250;
    limite->w = 250;
    //quadtree->limite=limite;
    quadtree->capacidade = 4;

    //Desenha pontos
    if (qtdPoint != 0){
        for (int i = 0; i < 50; i++){
            recepPoint(point->coordX[i], point->coordY[i]);
            //QPoint::printPoint(point->coordX[i], point->coordY[i]);
            //quadtree(QPoint::printPoint);
        }
    }

}

//funcao chamada toda vez que uma tecla for pressionada
void keyboard(int key)
{
   printf("\nTecla: %d" , key);
}
//funcao chamada toda vez que uma tecla for liberada
void keyboardUp(int key)
{
   printf("\nLiberou tecla: %d" , key);
}


//funcao para tratamento de mouse: cliques, movimentos e arrastos
void mouse(int button, int state, int wheel, int direction, int x, int y)
{
   //printf("\nmouse %d %d %d %d %d %d", button, state, wheel, direction,  x, y);
        //maxCont = x/2 - 20;
        if (state == 1){
            point->coordX[qtdPoint] = x;
            point->coordY[qtdPoint] = y;
            qtdPoint++;
        }
}

int main(void)
{
   CV::init(&screenWidth, &screenHeight, "Quadtree");

   CV::run();
}
