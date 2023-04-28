#include <stdio.h>
#include<string.h>

int main() {
 
    char algo[10];

    printf("Digite algo");
    scanf("%s", &algo);

    printf("A quantidade de caracteres em algo eh %zu ", strlen(algo));
    
}