#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, maiorNum = 0, menorNum = 99999;

    while (num > -1)
    {
        printf("Digite um numero:");
        scanf("%d", &num);

        if (num > maiorNum)
            maiorNum = num;

        if (num < menorNum)
            menorNum = num;
    }

    printf("O maior numero e:%d\n", maiorNum);
    printf("O menor numero e:%d", menorNum);

}