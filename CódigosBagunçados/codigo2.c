#include <stdio.h>

int main (){

float alturaM, alturaCm;
char sexo;

printf("Informe sua altura em cm");
scanf("%f" , &alturaCm);
fflush(stdin);

do{
printf("Sendo H - Homem e M - Mulher\nInforme seu sexo:");
scanf("%c" , &sexo);
fflush(stdin);
} while (sexo != 'h' || sexo != 'H' || sexo != 'M' || sexo != 'm');

alturaM = alturaCm / 100;

if ( sexo == 'm' || sexo == 'M'){
    printf("Seu peso ideal eh %f" , alturaM);
}
else printf("Seu peso ideal eh");


}