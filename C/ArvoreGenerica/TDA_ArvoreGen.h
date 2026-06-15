#ifndef ____TDA_ARVOREGEN.H_____
    #define ____TDA_ARVOREGEN.H_____

    #include <stdio.h>
    #include <stdlib.h>

    typedef struct arvore
    {
        void* info;
        struct arvore* sae;
        struct arvore* sad;
    }Arv;

    Arv* cria_vazia(void);
    Arv* cria_no(void* inf,Arv* sae,Arv* sad);
    void* remove_no(Arv* a);
    int arv_vazia(Arv* a);
    void arv_processa(Arv* a, void(*callback)(void*));
    Arv* arv_libera(Arv* a);
    Arv* arv_busca(Arv* r, void* inf,int(*compara)(void*,void*));
    int arv_altura(Arv* a);
    Arv* Arv_load_from_file(char* file, void* (*le_linha)(char*), int (*compare)(void*, void*));
    int conta_nos(Arv *arvoree);  
    int conta_folha(Arv *arovree);  
    Arv *arv_copia_no(Arv *no_original); 
    Arv *arv_insere_no_comparacao(Arv *arvore, Arv *novo_no, int (*cmpMA)(void *, void *));// seria basicamente inserindo aleatoriamente sem precisar ser valores fixos 
    Arv *arv_filtra(Arv *arvore, int (*condicao)(void *), void *(*copia_info)(void *), int (*cmp)(void *, void *));
    void escreve_em_ordem(Arv *no, FILE *fp, char *(*cria_linha)(void *));
    void arv_para_arquivo(Arv *a, char *nome_arquivo, char *(*cria_linha)(void *));
    Arv *arquivo_para_arv(char *nome_arquivo, void *(*le_linha)(char *), int (*cmp)(void *, void *));

    #include "TDA_ArvoreGen.c"
#endif