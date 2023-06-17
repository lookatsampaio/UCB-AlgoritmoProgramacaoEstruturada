#include<stdio.h>




typedef struct restaurante{ // "typedef" serve para utilizarmos o resumo ou apelido
    char nome[30], endereco[30], tipoComida[30];
    double precoMedio;
    struct restaurante *ponteiro; //definição da variável do tipo ponteiro

} restaurante; //resumo da "struct"


restaurante *inicializar (){ //funcao que pode ter qualquer nome
    return NULL;
}


// tipo de dado = struct        // nome da funcao       //parametros(tipo e o nome da variavel)
restaurante                     *inserir                (restaurante *cadastroRestaurante){
    restaurante *novo; //espaco para ponteiro restaurante

    novo = (restaurante*) malloc (sizeof(cadastroRestaurante)); //conversao pq o "malloc" so recebe inteiro

    printf("Digite o nome do restaurante!");
    scanf("%s", &novo->nome); // nao permite inserir espaco
    fflush(stdin);
    printf("Digite o ednereco do restaurante!");
    fgets (novo->endereco, 30, stdin); //fgets eh so pra string
    printf("Digite o preco medio!");
    scanf("%lf", &novo->precoMedio); 

    novo->ponteiro = cadastroRestaurante;

    return novo;

}


int main(){

    // restaurante *cadastroRestaurantes[1000]; //alocacao estatica
    restaurante *cadastroRestaurantes; //alocacao dinamica - lista criada
    cadastroRestaurantes = inicializar(); //lista vazia igualanda a zero
    cadastroRestaurantes = inserir(cadastroRestaurantes);

}