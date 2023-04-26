#include <stdio.h>

/* solicitar dois numeros, soma-los e verificar se eh impar ou par*/

int main (){

    int n1[5], n2[5], media[5]; //cada espaco definido em um vetor aloca 5bytes como cada um desses possui 5 ent eh 5x5=16bytes
    int i;

    for (i=0;i<5;i++){
        printf("Digite dois numeros\n");
        scanf("%d%d", &n1[i], &n2[i]); //o "i" define qual espaco sera alocado conforme o "for" aumentar
        media[i] = (n1[i] + n2[i]);
            
    }

    system("cls");
    printf("RESULTADO\n\n");

    for (i=0;i<5;i++){
        if (media[i] % 2 == 0){
            printf("%d + %d = %d - Par\n\n", n1[i], n2[i], media[i]);

        }
            else{
                printf("%d + %d = %d - Impar\n\n", n1[i], n2[i], media[i]);
            }
            
    }

}