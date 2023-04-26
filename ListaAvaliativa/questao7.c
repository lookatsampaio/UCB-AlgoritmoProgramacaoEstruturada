#include <stdio.h>
#include <stdlib.h>


int main()
{

    int valor, num1 = 0, num2 = 1, proxiNum;

    printf("Digite um numero maior que 0:");
    scanf("%d", &valor);

    if (valor == 0)
    {
        printf("0");
    }

    if (valor == 1)
    {
        printf("1");
    }

    for (int i = 2; i <= valor; i++)
    {
        proxiNum = num1 + num2;
        num1 = num2;
        num2 = proxiNum;
    }

    printf("Enesimo termo: %d", proxiNum);

}