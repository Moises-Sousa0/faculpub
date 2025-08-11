#include <stdio.h>


//Função recursiva para mover a Torre.
void moverTorre(int casas)
{
    if (casas > 0)
    {
        printf("Direita\n");
        moverTorre(casas - 1); // chamada recursiva ate chegar a 0
    }
}


//Função recursiva para mover a Rainha
void moverRainha(int casas)
{
    if (casas > 0)
    {
        printf("Esquerda\n");
        moverRainha(casas - 1); //chamada recursiva ate chegar a 0
    }
}


 //Função recursiva para mover o Bispo.
void moverBispo(int casas, int mover_casas)
{
    if (casas <= 0)
        return;

    //movimento vertical para cima
    for (int i = 0; i < mover_casas; i++)
    {
        printf("Cima\n");
    }

    //movimento horizontal para direita
    for (int j = 0; j < mover_casas; j++)
    {
        printf("Direita\n");
    }

    moverBispo(casas - 1, mover_casas); //chamada recursiva
}


 //função para mover o Cavalo em "L"
 // 2 casas para cima e 1 para a direita
void moverCavalo(int repeticoes)
{
    for (int r = 0; r < repeticoes; r++) // repete o movimento completo
    {
        int casasCima = 0;

        //duas casas para cima
        while (1)
        {
            if (casasCima >= 2)
                break; // sai do loop quando já moveu 2 vezes
            printf("Cima\n");
            casasCima++;
        }

        // uma casa para a direita
        printf("Direita\n");
    }
}

int main()
{
    //quantidade de movimentos para cada peça
    int casasTorre = 5;
    int casasRainha = 8;
    int casasBispo = 5;
    int casasPorPassoBispo = 1;
    int repeticoesCavalo = 1;

    
    moverTorre(casasTorre);
    printf("\n");

    
    moverRainha(casasRainha);
    printf("\n");

    
    moverBispo(casasBispo, casasPorPassoBispo);
    printf("\n");

    
    moverCavalo(repeticoesCavalo);

    return 0;
}
