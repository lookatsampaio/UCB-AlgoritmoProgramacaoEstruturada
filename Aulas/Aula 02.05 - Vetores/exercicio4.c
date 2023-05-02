#include <stdio.h>

int main(){

    int vetor[6], i, nBusca, posicao[6], contador = 0;

    //preencher o vetor de numero inteiros
    for (i=0; i<6; i++){
        printf("Digite o valor:\n");
        scanf("%d", &vetor[i]);
        //vetor[i] = i * 5;
    }

    printf("Digite o numero: ");
    scanf("%d", &nBusca);

    for (i = 0; i < 6; i++){
         if(nBusca == vetor[i]){
            posicao[contador] = i;
            contador++;
         }
    }

    //system("cls");

    
    if(contador == 0){
        printf("Sem numeros semelhantes");
    } else{
        printf("Quantidade de vezes que o numero %d aparece: %d\n", nBusca, contador);

        for (i = 0; i < contador; i++){
            printf("Aparece na posicao %d", posicao[i]);
        }
    }
    
    


}