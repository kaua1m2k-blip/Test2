#include "STD_pilha.h"

void imprime_int(void *dado) {
    printf("%d\n", *(int*)dado);
};
void imprime_float(void *dado) {
    printf("%.2f\n", *(float*)dado);
};
void imprime_string(void *dado) {
    printf("%s\n", (char*)dado);
};

int main(){

    int op,cont=1,infotipo;
    Pilha* p=pilha_cria();

    while(cont=1){
        printf("O que deseja fazer ?\n");
        printf("Push (1)\n");
        printf("PoP (2)\n");
        printf("Imprimir Pilha (3)\n");
        printf("Liberar Pilha (4)\n");
        printf("Verificar Pilha (5)\n");
        scanf("%d",&op);
        if(op==2){
            printf("que tipo de informação deve ser colocada na pilha (1)int (2)float (3)string: ");
            scanf("%d",&infotipo);
        }

        switch (op)
        {
        case 1:
             if (infotipo == 1) {
            int *valor = (int*) malloc(sizeof(int));
            printf("Digite a informacao: ");
            scanf("%d", valor);
            pilha_push(p, valor);
        }

        else if (infotipo == 2) {
            float *valor = (float*) malloc(sizeof(float));
            printf("Digite a informacao: ");
            scanf("%f", valor);
            pilha_push(p, valor);
        }

        else if (infotipo == 3) {
            char link[50];
            printf("Digite a informacao: ");
            scanf(" %[^\n]", link);

            char *valor = (char*) malloc(strlen(link) + 1);
            strcpy(valor, link);

            pilha_push(p, valor);
        }
            break;
        case 2:
            pop(p);
        case 3:
            if (infotipo == 1)
                pilha_percorer(p, imprime_int);
            else if (infotipo == 2)
                pilha_percorer(p, imprime_float);
            else if (infotipo == 3)
                pilha_percorer(p, imprime_string);
            break;
        case 4:
            pilha_libera(p);            
            break;
        case 5:
            int ver = pilha_verifica(p);
            if(ver!=0){
                printf("Pilha não esta vazia!");
            }else{
                printf("Pilha esta vazia!");
            }
            break;

        default:
            break;
        } 
        printf("Fazer outra acao? (1)sim (0)Nao");
        scanf("%d",&cont);
    }


    return 0;
}