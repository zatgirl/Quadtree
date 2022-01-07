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

#include "gl_canvas2d.h"
#include "rectangle.h"
#include "point.h"
#include "quadtree.h"

//variaveis globais
int screenWidth = 512, screenHeight = 512; //largura e altura inicial da tela. Alteram com o redimensionamento de tela.

int qtdPoint = 0;

QPoint::Point*point = new QPoint::Point();
QRect::Rect*rect = new QRect::Rect();

void render()
{
    //Desenha pontos
    if (qtdPoint != 0){
        for (int i = 0; i < 50; i++){
            QPoint::printPoint(point->coordX[i], point->coordY[i]);
        }
    }
    /*while(){
        for(int y = point->y; y < ; y++){
            for(int x = point->x; x < ; x++){
                CV::color(0,0,0) ==
            }
        }
    }
    quadtree(point->x, point->y, )*/
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
