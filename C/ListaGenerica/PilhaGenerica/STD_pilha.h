#ifndef __STD_PILHA__
    #define __STD_PILHA__

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    typedef struct pilha{

        void* info;
        struct pilha* next;

    }Pilha;


    Pilha* pilha_cria(void);
    void push(Pilha* p, void* dado);
    void pop(Pilha* p);
    void pilha_libera(Pilha* p);
    void pilha_percorer(Pilha* p, void(*leitura)(void*));
    int pilha_verifica(Pilha* p);

    #include "STD_pilha.c"

#endif