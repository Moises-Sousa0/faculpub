#include <stdio.h>

int main() {
    int tabuleiro[10][10];     
    int i, j, r, c;


    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0; // 0 = água
        }
    }



    // Navio horizontal
    tabuleiro[0][0] = 3;
    tabuleiro[0][1] = 3;
    tabuleiro[0][2] = 3;

    //navio vertical 
    tabuleiro[2][2] = 3;
    tabuleiro[3][2] = 3;
    tabuleiro[4][2] = 3;

    //dois navios diagonais
    tabuleiro[5][0] = 3;
    tabuleiro[6][1] = 3;
    tabuleiro[7][2] = 3;

    tabuleiro[0][9] = 3;
    tabuleiro[1][8] = 3;
    tabuleiro[2][7] = 3;



    //cria as matrizes de habilidade dinamicamente
    const int H = 5, W = 5;
    int cone[H][W];
    int cruz[H][W];
    int octaedro[H][W];

    int center = 2; // centro da matriz 5x5 (índice 2)

    //cone (aponta para baixo) topo é a origem (linha 0)
    for (r = 0; r < H; r++) {
        for (c = 0; c < W; c++) {
            if (r == 0) {
                cone[r][c] = (c == center) ? 1 : 0;
            } else if (r == 1) {
                cone[r][c] = ( (c >= center - 1) && (c <= center + 1) ) ? 1 : 0;
            } else if (r == 2) {
                cone[r][c] = 1; //linha larga
            } else {
                cone[r][c] = 0; //linhas inferiores do 5x5 nao usadas no cone
            }
        }
    }

    //cruz (linha central + coluna central)
    for (r = 0; r < H; r++) {
        for (c = 0; c < W; c++) {
            if (r == center || c == center) cruz[r][c] = 1;
            else cruz[r][c] = 0;
        }
    }

    //octaedro (vista frontal => losango/diamond)
    for (r = 0; r < H; r++) {
        for (c = 0; c < W; c++) {
            int manh = (r > center ? r - center : center - r) + (c > center ? c - center : center - c);
            octaedro[r][c] = (manh <= center) ? 1 : 0;
        }
    }



    //pontos de origem no tabuleiro ´
    int cone_origin_row = 1, cone_origin_col = 5;     // exemplo: topo do cone em (1,5)
    int cruz_origin_row = 6, cruz_origin_col = 7;     // centro da cruz em (6,7)
    int oct_origin_row = 4, oct_origin_col = 1;       // centro do octaedro em (4,1)


    //sobrepor uma matriz de habilidade
    //sobrepõe a matriz skill no tabuleiro com offset (topRow leftCol)
    for (r = 0; r < H; r++) {
        for (c = 0; c < W; c++) {
            //calculo da posição correspondente no tabuleiro:
            //sera preenchido apenas se skill[r][c] == 1 e dentro dos limites do tabuleiro
            int board_r = 0;
            int board_c = 0;


        }
    }



    //sobrepor cone
    int cone_top_row = cone_origin_row;
    int cone_left_col = cone_origin_col - center;
    for (r = 0; r < H; r++) {
        for (c = 0; c < W; c++) {
            if (cone[r][c] == 1) {
                int br = cone_top_row + r;
                int bc = cone_left_col + c;
                if (br >= 0 && br < 10 && bc >= 0 && bc < 10) {
                    // Marca área afetada como 5 somente se não tiver navio (3)
                    if (tabuleiro[br][bc] == 0) tabuleiro[br][bc] = 5;
                }
            }
        }
    }


    //sobrepor cruz
    int cruz_top = cruz_origin_row - center;
    int cruz_left = cruz_origin_col - center;
    for (r = 0; r < H; r++) {
        for (c = 0; c < W; c++) {
            if (cruz[r][c] == 1) {
                int br = cruz_top + r;
                int bc = cruz_left + c;
                if (br >= 0 && br < 10 && bc >= 0 && bc < 10) {
                    if (tabuleiro[br][bc] == 0) tabuleiro[br][bc] = 5;
                }
            }
        }
    }



    //sobrepor octaedro
    int oct_top = oct_origin_row - center;
    int oct_left = oct_origin_col - center;
    for (r = 0; r < H; r++) {
        for (c = 0; c < W; c++) {
            if (octaedro[r][c] == 1) {
                int br = oct_top + r;
                int bc = oct_left + c;
                if (br >= 0 && br < 10 && bc >= 0 && bc < 10) {
                    if (tabuleiro[br][bc] == 0) tabuleiro[br][bc] = 5;
                }
            }
        }
    }


    printf("=== BATALHA NAVAL - NÍVEL MESTRE ===\n\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
