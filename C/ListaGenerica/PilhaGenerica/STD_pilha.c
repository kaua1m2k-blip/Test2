#include "STD_pilha.h"

Pilha* pilha_cria(void){
    return NULL;
}

void push(Pilha* p, void* dado){

    Pilha* novo=(Pilha*)malloc(sizeof(Pilha));
    if(novo==NULL){
        printf("Falha ao alocar memoria!");
        return NULL;
    }

    novo->info = dado;
    novo->next = p;

    return novo;
}

void pop(Pilha* p){
    Pilha* remove = p;
    p = p->next;
    void* ret = remove->info;
    free(remove);
    return ret;
}

void pilha_libera(Pilha* p){

    Pilha* remove = p;
    while(remove!= NULL){
        Pilha* new=remove->next;
        free(remove);
        remove=new;
    }

}

void pilha_percorer(Pilha* p, void(*leitura)(void*)){

    Pilha* ler=p;
    while(ler!=NULL){
        leitura(ler->info);
        ler=ler->next;
    }

}

int pilha_verifica(Pilha* p){

    return p!=NULL;
}