#include "TAD_FORMAS.h"
#define ret 0
#define tri 1
#define cir 2
#define Pi 3.14

ListHet* listhet_Insert(ListHet* l, int tipo){

    ListHet* novo;
    novo->info=0;
    novo->tipo=0;
    novo->prox=0;

    switch (tipo)
    {
    case ret:
        float b=0.0;
        float h=0.0;
        printf("Digite a base do retengulo");
        scanf("%f",&b);
        printf("Digite a altura do retengulo");
        scanf("%f",&h);
        novo = cria_ret(b,h);
        break;

    case tri:
        float b=0.0;
        float h=0.0;
        printf("Digite a base do triangulo");
        scanf("%f",&b);
        printf("Digite a altura do triangulo");
        scanf("%f",&h);
        novo = cria_tri(b,h);
        break;

    case cir:
         float r=0.0;
        printf("Digite o raio do circulo");
        scanf("%f",&r);
        novo = cria_cir(r);
        break;
    
    default:
        printf("Essa estrutura não existe");
        break;
    }

    if(!novo){
        printf("elemento nao adiconado a lista");
    }
    if(l=NULL){
        l=novo;
    }
    else{
        l->prox=novo;
    }


}

void ler_lista(ListHet* l){
    for(ListHet* i=l;i!=NULL;i=i->prox){

    switch (l->tipo)
    {
    case ret:
        printf("=====retengulo=====");
        Retangulo* r = (Retangulo*) l->info;    
        printf("Base: %f, altura: %f",r->b,r->h);
        break;

    case tri:
        printf("=====triangulo=====");
        Triangulo* t = (Triangulo*) l->info;    
        printf("Base: %f, altura: %f",t->b,t->h);
        break;

    case cir:
        printf("=====Circulo=====");
        circulo* c = (circulo*) l->info;
        printf("O raio eh: %f",c->raio);
        break;
    
    default:
        break;
    }
}

}

ListHet* cria_ret(float b, float h){

    Retangulo* r;
    ListHet* l;

    r=(Retangulo*)malloc(sizeof(Retangulo));
    r->b=b;
    r->h=h;

    l=(ListHet*)malloc(sizeof(ListHet));
    l->tipo=ret;
    l->info=r;
    l->prox=NULL;

    return l;
}

ListHet* cria_tri(float b, float h){

    Triangulo* r;
    ListHet* l;

    r=(Triangulo*)malloc(sizeof(Triangulo));
    r->b=b;
    r->h=h;

    l=(ListHet*)malloc(sizeof(ListHet));
    l->tipo=ret;
    l->info=r;
    l->prox=NULL;

    return l;
}

ListHet* cria_tri(float r){

    circulo* c;
    ListHet* l;

    c=(circulo*)malloc(sizeof(circulo));
    c->raio=r;

    l=(ListHet*)malloc(sizeof(ListHet));
    l->tipo=ret;
    l->info=c;
    l->prox=NULL;

    return l;
}


