#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Diga um numero:");
    scanf("%d", &num);
    printf("Divisores:");
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d", i);
        }
    }

}