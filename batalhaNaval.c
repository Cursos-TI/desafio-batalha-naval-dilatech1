/*
    Desafio Batalha Naval - Nível Aventureiro

    Neste nível o tabuleiro aumenta para 10x10 e precisamos
    colocar 4 navios: um horizontal, um vertical e dois na diagonal.

    Depois só mostrar o tabuleiro com 0 (vazio) e 3 (navio).
*/

#include <stdio.h>

#define TAM 10
#define NAVIO 3

int main() {

    int tab[TAM][TAM];

    // Deixar todo mundo zerado antes de começar
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tab[i][j] = 0;
        }
    }

    // ---------------------------
    // Posicionamento dos navios
    // ---------------------------

    // Navio horizontal (4 espaços)
    for (int j = 3; j < 3 + 4; j++) {
        tab[2][j] = NAVIO;
    }

    // Navio vertical (3 espaços)
    for (int i = 5; i < 5 + 3; i++) {
        tab[i][8] = NAVIO;
    }

    // Navio diagonal descendo (\)
    for (int k = 0; k < 4; k++) {
        tab[0 + k][0 + k] = NAVIO;
    }

    // Navio diagonal subindo (/)
    for (int k = 0; k < 3; k++) {
        tab[6 - k][2 + k] = NAVIO;
    }

    // ---------------------------
    // Exibir o tabuleiro inteiro
    // ---------------------------
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }

    return 0;
}
