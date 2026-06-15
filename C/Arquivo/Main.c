#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    FILE* fp = fopen("..\\text.txt","rt");

    if(!fp){
        printf("erro na leitura");
        exit(2);
    }
    int c=0, nlinhas=0;

    while((c=fgetc(fp))!=EOF){

        printf("%c",c);
        if(c=='\n')
            nlinhas++;
    }
    printf("\n tem %d linhas",nlinhas);
    
    fclose(fp);

    char fras[50];
    FILE* new = fopen("..\\New.txt","wt");
    if(!new){
        printf("erro ao criar aquivo");
        exit(1);
    }
    printf("\ndigite um texto\n");
    fgets(fras,sizeof(fras),stdin);
    fprintf(new,"%s",fras);
    fclose(new);

    
    return 0;
}   