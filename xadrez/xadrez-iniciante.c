#include <stdio.h>

int main()
{

    int rainha = 0;
    int bispo = 0;

    // mover a torre 4 casas pra direita
    for (int torre = 0; torre < 5; torre++)
    {
        printf("Direita\n");
    }

    printf("\n");

    // mover a rainha 8 casas para esquerda
    while (rainha < 8)
    {
        printf("Esquerda\n");
        rainha++;
    }

    printf("\n");

    // mover o bispo 5 casas

    do
    {
        printf("Cima direita\n");
        bispo++;
    } while (bispo < 5);

    printf("\n");

    return 0;

}