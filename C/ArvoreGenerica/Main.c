#include <stdio.h>
#include <stdlib.h>
#include "TDA_ArvoreGen.h"

char* cria_linha(void* info){
    int* valor=(int*)info;
    char* linha=malloc(20);
    sprintf(linha, "%d", *valor);

    return linha;
}

int main(){



    return 0;
}