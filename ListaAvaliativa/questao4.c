#include <stdio.h>
#include <stdlib.h>


int main()
{

    float a, b;

    printf("Digite as coordenadas de A e B:");
    scanf("%f %f", &a, &b);

    if (a > 0 && b > 0)
    {
        printf("O ponto esta no Q1");
    }
    else if (a < 0 && b > 0)
    {
        printf("O ponto esta no Q2");
    }
    else if (a < 0 && b < 0)
    {
        printf("O ponto esta no Q3");
    }
    else if (a > 0 && b < 0)
    {
        printf("O ponto esta no Q4");
    }
    else if (a == 0 && b != 0)
    {
        printf("Eixo X");
    }
    else if (a != 0 && b == 0)
    {
        printf("Eixo Y");
    }
    else if (a == 0 && b == 0)
    {
        printf("Origem");
    }

}