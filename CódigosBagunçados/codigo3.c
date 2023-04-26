#include <stdio.h>

int main() {

    int numeroInicial, numeroFinal, contador;

    printf("Digite o numero inicial");
    scanf("%d", &numeroInicial);

    printf("Digite o numero final");
    scanf("%d", &numeroFinal);

    for (contador = numeroInicial; contador <= numeroFinal; contador+=2){ // numer

        printf("O numeroInicial eh %d\n", contador);

    }


}