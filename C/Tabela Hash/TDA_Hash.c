#include "TDA_Hash.h"

static int gera_hash(int matri){

    return (matri%MAX);
}
Aluno* busca_hash(Aluno** tab, int mat){

    Aluno* a= tab[hash(mat)];
    while(a!=NULL){
        if(a==tab){
            break;
        }
        a = a->prox;
    }
    return a;

}
Aluno* insere_hash(Aluno** tab, int mat, char *nome, char* tel, char* email){

    int n_hash=hash(mat);

    Aluno* a= tab[n_hash];
    Aluno* ant = NULL;
    while(a!=NULL){
        if(a->matri ==mat){
            break;
        }
        ant = a;
        a=a->prox;
    }

    if(a){
        strcpy(a->nome,nome);
        strcpy(a->tel,tel);
        strcpy(a->email,email);
        return a;

    }else{

        Aluno* novo=(Aluno*)malloc(sizeof(Aluno));
            if(novo==NULL){
                printf("erro ao alocar memoria");
            }
        novo->matri = mat;
        strcpy(novo->nome,nome);
        strcpy(novo->tel,tel);
        strcpy(novo->email,email);
        novo->prox=NULL;
        if(ant){
            ant->prox =novo;
        }else{
            tab[n_hash] = novo;
        }
        return novo;
    }

}
int remove_hash(Aluno** tab, int mat){

    Aluno* a= tab[gera_hash(mat)];
    Aluno* ant=NULL;
    while(a!=NULL){
        if(a->matri==mat){
            break;
        }
        ant=a;
        a=a->prox;
    }
    if(a==NULL){
        return 0;
    }
    if(ant==NULL){
        tab[gera_hash(mat)]=a->prox;
    }else{
        ant->prox=a->prox;
    }
    free(a);
    return 1;

}
void mostra_tabela(Aluno** tab){
    
    int num=0;
    while(num<MAX){
        Aluno* aux=tab[num];
        if(aux){
            while(aux!=NULL){
                printf("Matricula: %d\n",aux->matri);
                printf("email: %s\n",aux->email);
                printf("telefone: %s\n",aux->tel);
                printf("Nome: %s\n",aux->nome);
                aux=aux->prox;
            }
        }
        num++;
    }
}
int conta_aluno(Aluno** tab){
    int num=0;
    int cont=0;
    while(num<MAX){
        Aluno* aux=tab[num];
        if(aux){
            while(aux!=NULL){
                cont++;
                aux=aux->prox;
            }
        }
        num++;
    }
    return cont;
}