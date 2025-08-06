#include <stdio.h>

int main(){
    char estado, estado2;
    char cidade[20], cidade2[20];
    unsigned long int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int pontosTuristicos, pontosTuristicos2;
    int opcao;

    //atribuindo valores
    estado = 'a';
    estado2 = 'b';
    populacao = 10000;
    populacao2 = 11000;
    area = 30000;
    area2 = 20000;
    pib = 30000;
    pib2 = 59000;
    pontosTuristicos = 5;
    pontosTuristicos2 = 2;

    //nomes
    sprintf(cidade, "Fortaleza");
    sprintf(cidade2, "São paulo");


    //calculo multiplos atributos
    float densidade = populacao / area; //calculo de densidade da carta 1
    float pibper = pib / populacao; //calculo do pib per capita da carta 1
    float densidade2 = populacao2 / area2; //calculo de densidade da carta 2
    float pibper2 = pib2 / populacao2; //calculo do pib per capita da carta 2




    printf("===========================\n");
    printf("====== SUPER TRUNFO =======\n");
    printf("1 - Comparar população\n");
    printf("2 - Comparar area\n");
    printf("3 - Comparar PIB\n");
    printf("4 - Comparar pontos turísticos\n");
    printf("5 - Comparar densidade\n");
    printf("6 - Comparar PIB per capita\n");
    printf("===========================\n");
    printf("Digite o número da opção que deseja: ");
    scanf("%d", &opcao);


    switch (opcao)
    {
    case 1:
        if (populacao > populacao2)
            printf("\n%s venceu! Possui uma população de: %lu habitantes.", cidade, populacao);
        else if (populacao2 > populacao)
            printf("\n%s venceu! Possui uma população de: %lu habitantes.", cidade2, populacao2);
        else
            printf("Empate!");
        break;
    
    
    case 2:
        if (area > area2)
            printf("\n%s venceu! Possui uma area de: %.3f KM.", cidade, area);
        else if (area2 > area)
            printf("\n%s venceu! Possui uma area de: %.3f KM.", cidade2, area2);
        else
            printf("Empate!");
        break;


    case 3:
        if (pib > pib2)
            printf("\n%s venceu! Possui um PIB de: %.3f.", cidade, pib);
        else if (pib2 > pib)
            printf("\n%s venceu! Possui um PIB de: %.3f.", cidade2, pib2);
        else
            printf("Empate!");
        break;


    case 4:
        if (pontosTuristicos > pontosTuristicos2)
            printf("\n%s venceu! Possui %d pontos turísticos.", cidade, pontosTuristicos);
        else if (pontosTuristicos2 > pontosTuristicos)
            printf("\n%s venceu! Possui %d pontos turísticos.", cidade2, pontosTuristicos2);
        else
            printf("Empate!");
        break;
    


    case 5:
        if (densidade < densidade2)
            printf("\n%s venceu! Possui uma densidade de: %f.", cidade, densidade);
        else if (densidade2 < densidade)
            printf("\n%s venceu! Possui uma densidade de: %f.", cidade2, densidade2);
        else
            printf("Empate!");
        break;    



    case 6:
        if (pibper > pibper2)
            printf("\n%s venceu! Possui um PIB per capita de: %f.", cidade, pibper);
        else if (pibper2 > pibper)
            printf("\n%s venceu! Possui um PIB per capita de: %f.", cidade2, pibper2);
        else
            printf("Empate!");
        break;

    default:
        printf("Número inválido.");
        break;
    }
}