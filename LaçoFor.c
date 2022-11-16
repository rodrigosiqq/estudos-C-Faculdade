#include<stdio.h>
int main(){
    int x, y, contador;
    for(y = 0; y<=15; y++){
        printf("\n numeros=%d", y);
    }


    //laço de repetição contando numeros pares
    for(x=0; x<=10; x+=2){
        printf("\n cont-numeros pares=%d", x);
    }

    //contagem regrassiva Laços
    printf("\nDigite um número qualquer maior que 1: ");
    scanf("%d", &contador);
    for(contador; contador >=1; contador--){
        printf("\n conte=%d", contador);
    }
    return 0;
}
