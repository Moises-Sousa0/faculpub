#include <stdio.h>

int main (){
    
    int tabuleiro [10][10];
    int i, j;

    //preenche o tabuleiro com 0
    for (i = 0; i <10; i++) {
        for (j=0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }


    //dois navios normais
    tabuleiro[0][0] = 3;
    tabuleiro[0][1] = 3;
    tabuleiro[0][2] = 3; 

    tabuleiro[2][2] = 3;
    tabuleiro[3][2] = 3;
    tabuleiro[4][2] = 3;





    printf("===BATALHA-NAVAL===\n");
    printf("\n");
    //mostra tabuleiro
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }


    return 0;
}