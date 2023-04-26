#include <stdio.h>

int main (){

    float n1[4], n2[4], media[4]; //cada espaco definido em um vetor aloca 4bytes como cada um desses possui 4 ent eh 4x4=16bytes
    int i;

    for (i=0;i<4;i++){
        printf("Digite as duas notas\n");
        scanf("%f%f", &n1[i], &n2[i]); //o "i" define qual espaco sera alocado conforme o "for" aumentar
        media[i] = (n1[i] + n2[i])/2;
        printf("a media do aluno %d corresponde a %.1f\n", i, media[i]);
    }

}