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
int mouseX, mouseY, stateMouse; //variaveis globais do mouse para poder exibir dentro da render().

int cont = 1;
int maxCont = 0;

Point*point = new Point();
Rect*rect = new Rect();

void render()
{
    quadtree(screenWidth,screenHeight,)
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
            point->x = x;
            point->y = x;
        }
}

int main(void)
{
   CV::init(&screenWidth, &screenHeight, "Quadtree");

   CV::run();
}
