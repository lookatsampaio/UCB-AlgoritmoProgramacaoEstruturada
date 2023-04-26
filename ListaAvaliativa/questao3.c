#include <stdio.h>
#include <math.h>

int main()
{
    int raio;
    const float PI = 3.14159;
    float volume, areaDaSuperfi;

    printf("Digite o valor do raio da esfera:\n");
    scanf("%d", &raio);

    volume = (4.0 / 3) * PI * pow(raio, 3);
    areaDaSuperfi = 4 * PI * pow(raio, 2);

    printf("\nA area da superficie da esfera e de %.2f unidades de area.\n", areaDaSuperfi);
    printf("O volume da esfera e de %.2f unidades de volume.\n", volume);

}