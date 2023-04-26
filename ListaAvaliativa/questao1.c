#include <stdio.h>

int main() {

int a,b,c, d, diferenca;

printf("Digite o valor de A\n");
scanf("%d", &a);
printf("Digite o valor de B\n");
scanf("%d", &b);
printf("Digite o valor de C\n");
scanf("%d", &c);
printf("Digite o valor de D\n");
scanf("%d", &d);

diferenca = (a*b-c*d);

printf("DIFERENCA = (%d*%d-%d*%d)\nDIFERENCA = (%d)",a, b, c, d, diferenca);
}