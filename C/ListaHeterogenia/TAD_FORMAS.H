#ifndef ______TAD_FORMAS.H_______
#define ______TAD_FORMAS.H_______

#include <stdio.h>
#include <stdlib.h>
#include "TAD_Formas.c"

#define ret 0
#define tri 1
#define cir 2
#define Pi 3.14

typedef struct retangulo{
    float b;
    float h;
}Retangulo;

typedef struct triangulo{
    float b;
    float h;
}Triangulo;

typedef struct circulo{

    float raio;
}circulo;

typedef struct listhet{

    int tipo;
    float* info;
    struct listhet* prox;

}ListHet;

ListHet* cria_ret(float b, float h);
ListHet* cria_tri(float b, float h);
ListHet* cria_cir(float r);
ListHet* listhet_Insert(ListHet* l, int tipo);
void ler_lista(ListHet* l);
    


#endif
