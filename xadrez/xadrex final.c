#include <stdio.h>

void moverTorre(int casas)
{
    if (casas > 0)
    {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

void moverRainha(int casas)
{
    if (casas > 0)
    {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

void moverBispo(int casas, int mover_casas)
{
    if (casas <= 0)
        return;

    // loop aninhado: mover na vertical
    for (int i = 0; i < mover_casas; i++)
    {
        printf("Cima\n");
    }

    // loop aninhado: mover na vertical
    for (int j = 0; j < mover_casas; j++)
    {
        printf("Direita\n");
    }

    moverBispo(casas - 1, mover_casas);
}

void moverCavalo(int repeticoes)
{
    for (int r = 0; r < repeticoes; r++)
    {
        int conCima = 0;
        while (1)
        {
            if (conCima >= 2)
                break;
            printf("Cima\n");
            conCima++;
        }
        printf("Direita\n");
    }
}

int main()
{

    moverTorre(5);
    printf("\n");
    moverRainha(8);
    printf("\n");

    int casas = 5; // quantas vezes repetir o movimento diagonal
    int mover_casas = 1;

    moverBispo(casas, mover_casas);
    printf("\n");
    moverCavalo(1);

    /*
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

    // movendo cavalo em L (2 pra baixo e 1 pra esquerda)
    for (int i = 1; i <= 2; i++)
    {
        printf("Baixo\n");

        if (i == 2)
        {
            int cavaloEsquerda = 0;
            while (cavaloEsquerda < 1)
            {
                printf("Esquerda\n");
                cavaloEsquerda++;
            }
        }
    }
    */
    return 0;
}