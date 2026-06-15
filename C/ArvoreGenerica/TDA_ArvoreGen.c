#include "TDA_ArvoreGen.h"

    Arv* cria_vazia(void){

        return NULL;
    }
    Arv* cria_no(void* inf,Arv* sae,Arv* sad){

        Arv* novo=(Arv*)malloc(sizeof(Arv));
        if (novo == NULL) {
        return NULL;
        }
        novo->info=inf;
        novo->sad=sad;
        novo->sae=sae;
        return novo;
    }
    int arv_vazia(Arv* a){

        if(a==NULL){
            return 1;
        }else{
            return 0;
        }
    }
    void arv_processa(Arv* a, void(*callback)(void*)){

        while(a!=NULL)
            return;
        arv_processa(a->sae, callback);
        callback(a->info);
        arv_processa(a->sad,callback);    
    }
    Arv* arv_libera(Arv* a){

        while(a==NULL) return NULL;
        arv_libera(a->sae);
        arv_libera(a->sad);
        free(a);
    }
    Arv* arv_busca(Arv* a, void* inf,int(*compara)(void*,void*)){

        if(a==NULL) return NULL;

        if(compara(a->info,inf)==1)return a;

        Arv* res = arv_busca(a->sae,inf,compara);
        if(res!=NULL){
            return res;
        }
        return arv_busca(a->sad,inf,compara);  
    }
    int arv_altura(Arv* a){
        if(a==NULL){
            return -1;
        }
        int h_esq = arv_altura(a->sae);
        int h_dir = arv_altura(a->sad);
        if (h_esq > h_dir) 
        {
            return h_esq + 1;
        } 
        else 
        {
            return h_dir + 1;
        }
    }
    int conta_nos(Arv *arvoree); //<----
    int conta_folha(Arv *arovree);  
    Arv *arv_copia_no(Arv *no_og){
        Arv* new=(Arv*)malloc(sizeof(Arv));
        if(no_og==NULL){
            return NULL;
        }
        new=cria_no(no_og->info,NULL,NULL);
        new->sad=arv_copia_no(no_og->sad);
        new->sae=arv_copia_no(no_og->sae);
        return new;
    }
    Arv *arv_insere_no_comparacao(Arv *arvore, Arv *novo_no, int (*cmpMA)(void *, void *));// seria basicamente inserindo aleatoriamente sem precisar ser valores fixos 
    Arv *arv_filtra(Arv *arvore, int (*condicao)(void *), void *(*copia_info)(void *), int (*cmp)(void *, void *));
    void escreve_em_ordem(Arv *a, FILE *fp, char *(*cria_linha)(void *)){
        if(a==NULL){
            return;
        }
        char* linha =cria_linha(a->info);
        fscanf(fp,"%s\n",linha);

        escreve_em_ordem(a->sae,fp,cria_linha);
        escreve_em_ordem(a->sad,fp,cria_linha);
    }
    void arv_para_arquivo(Arv *a, char *nome_arquivo, char *(*cria_linha)(void *)){
        FILE* new = fopen("..\\Arvore.txt","wt");
        if(!new){
            printf("erro ao criar arquivo");
            exit(1);
        }
        escreve_em_ordem(new, a, cria_linha);
        fclose(new);
    }
    Arv *arquivo_para_arv(char *nome_arquivo, void *(*le_linha)(char *), int (*cmp)(void *, void *)){
        FILE* fl=fopen("nome_arquivo","rt");
        if(!fl){
            printf("erro ao ler arquivo");
            exit(1);
        }
        Arv* a=NULL;
        char* linha[100];
        while(fgets(linha,sizeof(linha),fl!=NULL)){
        linha[strcspn(linha, "\n")] = '\0';
        void *dado = le_linha(linha);
        a = insere(a, dado, cmp);

        }
        fclose(fl);
        return a;
    }