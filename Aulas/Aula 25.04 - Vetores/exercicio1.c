#include <stdio.h>

int main (){

    float n1[5], n2[5], soma[5]; //cada espaco definido em um vetor aloca 5bytes como cada um desses possui 5 ent eh 5x5=16bytes
    int i;

    for (i=0;i<5;i++){
        printf("Digite dois numeros\n");
        scanf("%f%f", &n1[i], &n2[i]); //o "i" define qual espaco sera alocado conforme o "for" aumentar
        soma[i] = (n1[i] + n2[i]);
        printf("a soma %d corresponde a %.1f\n\n", i, soma[i]);
    }

}