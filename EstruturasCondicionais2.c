#include<stdio.h>

int valor;
int main(){

    printf("\n digite um valor para indificar se é par ou impar: \n ");
    scanf("%d", &valor);
    if (valor % 2 == 0 )
    {
        printf("\n o numero que você digitou é par!!");
    }
    else
    {
        printf("\n o numero que você digitou é impar!!");
    }
    return 0;

}
