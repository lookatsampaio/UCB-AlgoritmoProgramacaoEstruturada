#include <stdio.h>
#include <math.h>


int main()
{
    int a1, a2, b1, b2;
    float distancia;

    printf("Diga o valor de A da primeira coordenada:");
    scanf("%d", &a1);
    printf("Diga o valor de B da primeira coordenada:");
    scanf("%d", &b1);

    printf("Diga o valor de A da segunda coordenada:");
    scanf("%d", &a2);
    printf("Diga o valor de B da segunda coordenada:");
    scanf("%d", &b2);

    distancia = sqrt(pow((a2 - a1), 2) + pow((b2 - b1), 2));
    printf("A disancia = %.1f", distancia);

}