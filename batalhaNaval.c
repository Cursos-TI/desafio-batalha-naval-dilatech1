/*
    Desafio Batalha Naval – Nível Aventureiro

    Objetivos:
    - Criar um tabuleiro 10x10 usando matriz.
    - Posicionar 4 navios: um horizontal, um vertical e dois na diagonal.
    - Mostrar o tabuleiro completo no final (0 = vazio, 3 = navio).
*/

#include <stdio.h>

#define TAM 10
#define NAVIO 3

int main() {

    int tab[TAM][TAM];

    // Primeiro, deixo todo o tabuleiro zerado
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tab[i][j] = 0;
        }
    }

    // -----------------------------------------------------
    // Colocando os navios (tudo feito manualmente no código)
    // -----------------------------------------------------

    // Navio horizontal (linha 2, colunas 3 até 6)
    for (int j = 3; j < 3 + 4; j++) {
        tab[2][j] = NAVIO;
    }

    // Navio vertical (coluna 8, linhas 5 até 7)
    for (int i = 5; i < 5 + 3; i++) {
        tab[i][8] = NAVIO;
    }

    // Navio diagonal desc (0,0) até (3,3)
    for (int k = 0; k < 4; k++) {
        tab[0 + k][0 + k] = NAVIO;
    }

    // Navio diagonal ascendente (6,2) até (4,4)
    for (int k = 0; k < 3; k++) {
        tab[6 - k][2 + k] = NAVIO;
    }

    // -----------------------------------------------------
    // Exibe o tabuleiro completo
    // -----------------------------------------------------

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }

    return 0;
}
