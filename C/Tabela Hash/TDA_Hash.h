#ifndef ____TDA_HASH_____
    #define ____TDA_HASH_____

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    #define MAX 100

    typedef struct aluno
    {
        int matri;
        char nome[81];
        char tel[13];
        char email[51];
        struct aluno* prox;
    }Aluno;

    Aluno* tabela[MAX];
    static int gera_hash(int matri);
    Aluno* busca_hash(Aluno** tab, int mat);
    Aluno* insere_hash(Aluno** tab, int mat, char *nome, char* tel, char* email);
    int remove_hash(Aluno** tab, int mat);
    void mostra_tabela(Aluno** tab);
    int conta_aluno(Aluno** tab);

    #include "TDA_Hash.c"

#endif 
