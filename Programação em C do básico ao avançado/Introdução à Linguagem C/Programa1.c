//
// Created by Gustavo Dias on 10/03/2026.
//

//Aula sobre variáveis

#include <stdio.h>

int main(){ //A chave delimita um bloco de código (início do bloco)
    //Declarando varíaveis
    int idade; //Inteiro

    //Declarando e inicializando variáveis
    //int idade = 0;

    //Função para escrever algo na saída padrão (console)
    printf("Qual e a sua idade?\n"); //O ponto e vírgula finaliza um comando

    //Receber dados
    scanf("%d", &idade);

    //Saída
    printf("Sua idade eh %d",idade);

    return 0;
}  //Fim do bloco
