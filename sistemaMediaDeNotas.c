#include<stdio.h>
#include<stdlib.h>
int main(void)
{
  //Declaração das variáveis
  float nota1, nota2, media;
  
  //Entrada de dados
  printf("Digite a primeira nota do aluno: ");
  scanf("%f",&nota1);
  
  printf("Digite a segunda nota do aluno: ");
  scanf("%f",&nota2);
  
  //Processamento
  media = (nota1 + nota2) / 2;
  if (media >=4.5){
    printf("\n aluno aprovado!");
  }
  else if (media <=4)
  {
    printf("\n Aluno Reprovado :(");
  }
  //Saída
  printf("Media do aluno = %.1f\n",media);
  
  return 0;//retorno da função main  
}