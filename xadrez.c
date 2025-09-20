#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    int i;

    //Movimentação da Torre...
    printf("Movimento da Torre:\n");
    for (i = 1; i <= 5; i++)
    {
        printf("Direita\n"); 
    }
        printf("\n"); 

    //Movimentação do bisco...
    printf("Movimento do Bispo:\n");
    for (i = 1; i <= 5; i++)
    {
        printf("Para Cima e à Direita\n");
    }
        printf("\n");

    //Movimentação da rainha...
    printf("Movimento da Rainha:\n");
    for (i = 1; i <= 8; i++)
    {
        printf("Esquerda\n"); 
    }
    return 0;
}
