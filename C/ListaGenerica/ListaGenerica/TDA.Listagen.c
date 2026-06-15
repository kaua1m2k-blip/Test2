#include "TDA.Listagen.h"

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


Listag* lsgen_cria(){

    return NULL;
}
int lsgen_vazia(Listag* l){

    return l == NULL;
}
Listag* lsgen_inserir(Listag* l, void* elem){

    Listag* new =(Listag*)malloc(sizeof(Listag));
    new->info=elem;
    new->prox=l;
    return new;
}
void lsgen_percore(Listag* l, void(*processa)(void*)){

    while(l!=NULL){
        

    }

}