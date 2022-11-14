#include<stdio.h>
int main() {
    int idade; 
    printf("\n Digite sua idade: ");
    scanf("%d", &idade);
    if (idade >= 18) {
 	    printf("\n Você já pode tirar sua carteira de Habilitação, você é maior de 18");
    }
    else {

        printf("\n você não é maior de idade!!");
    }
    return 0;
}
