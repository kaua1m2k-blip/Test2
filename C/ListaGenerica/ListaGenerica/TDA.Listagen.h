#ifndef __TDA_LISTAGEN_____
    #define __TDA_LISTAGEN_____

    #include <stdio.h>
    #include <stdlib.h>

    typedef struct listag
    {
    void* info;
    struct listag* prox;
    }Listag;


    Listag* lsgen_cria();
    int lsgen_vazia(Listag* l);
    Listag* lsgen_inserir(Listag* l, void* elem);
    void lsgen_percore(Listag* l, void(*processa)(void*));
    void* lsgen_busca(Listag* l, int(*compra)(void*,void*),void* dado);
    Listag* lsgen_retira(Listag* l, int(*compra)(void*,void*),void* dado);
    Listag* lsgen_duplica(Listag* l,void(*duplica)(void*));
    void lsgen_libera(Listag* l);
    Listag* lsgen_filtra(Listag* l,void(*duplica)(void*));
    Listag* lsgen_ordena(Listag* l, int(*compra)(void*,void*),void* dado);

#endif