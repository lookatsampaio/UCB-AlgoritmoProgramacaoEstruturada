#include <stdio.h>
#include <string.h>

int main(){

    int vetor[80], i =0, nBusca, posicao[80], contador = 0;
    char continua[3];

    //preencher o vetor de numero inteiros
    do{
        printf("Digite o valor: ");
        scanf("%d", &vetor[i]);
        i++;
        printf("Deseja incluir mais um numero?\t Sim ou Nao\n");
        fflush(stdin);
        gets(continua);
    }while ((strcmp(continua, "Sim")==0 || strcmp(continua, "sim")==0) && i<80);

    system("cls");

    printf("Digite o numero: ");
    scanf("%d", &nBusca);

    for (i = 0; i < 80; i++){
         if(nBusca == vetor[i]){
            posicao[contador] = i;
            contador++;
         }
    }

    if(contador == 0){
        printf("Sem numeros semelhantes");
    } else{
        printf("Quantidade de vezes que o numero %d aparece: %d\n", nBusca, contador);

        for (i = 0; i < contador; i++){
            printf("Aparece na posicao %d", posicao[i]);
        }
    }
    
    


}