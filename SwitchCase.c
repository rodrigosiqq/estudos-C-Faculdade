#include<stdint.h>
// fluxo de uma aplicação de caixa eletrônico
int main(){

    int n;


    printf("\n(1) para Saldo\n(2) para extrato\n(3) para saque\n(4) para sair ");
    printf("\n informe a opição desejada: ");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("\n Saldo");
        break;
    case 2:
        printf("\n Extrato");
        break;
    case 3:
        printf("\n Saque");
        break;
    case 4:
        printf("\n Sair");
    default:
        printf("\n opção inválida!");
        
    }
return 0;


}