#include <stdio.h>

int main() {
    int tabuleiro[10][10];  //Matriz 10x10 para representar o tabuleiro
    int i, j;               

    //preenche o tabuleiro com 0
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    //Posiciona dois navios normais horizontal e vertical
    //Primeiro navio horizontal 
    tabuleiro[0][0] = 3;
    tabuleiro[0][1] = 3;
    tabuleiro[0][2] = 3;

    //Segundo navio vertical 
    tabuleiro[2][2] = 3;
    tabuleiro[3][2] = 3;
    tabuleiro[4][2] = 3;

    //Posiciona dois navios diagonais
    //Terceiro navio diagonal  
    tabuleiro[5][0] = 3;
    tabuleiro[6][1] = 3;
    tabuleiro[7][2] = 3;

    //Quarto navio diagonal 
    tabuleiro[0][9] = 3;
    tabuleiro[1][8] = 3;
    tabuleiro[2][7] = 3;


    printf("=== BATALHA NAVAL ===\n\n");

    //0 representa água, 3 representa navio
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}
