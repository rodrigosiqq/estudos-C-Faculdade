#include <stdalign.h>
#define VETOR_TM 4
int main(){
    int lista[VETOR_TM];
    int num, i=0, achou=0;
    //preenche vetor
    for(int i=0; i<VETOR_TM; i++){
        printf("\nInsira um Numero: ");
        scanf("%d", &lista[i]);
    }
    printf("\nInforme o número a ser encontrado: ");
    scanf("%d", &num);
    while (i<VETOR_TM){
        if (lista[i] == num)
        {
            achou=1;
            break;
        }
      i++;  
    }
    if (achou==1)
    {
        printf("\nOnumero %d Foi encontrado na Posição %d do vetor", num, i);
    }else{
        printf("\nO numero %d não foi encontrado no vetor", num);
    }

return 0;
    
}