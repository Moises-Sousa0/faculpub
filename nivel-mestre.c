#include <stdio.h>

int main(){
    char estado, estado2;
    char codigo[5], codigo2[5];
    char cidade[20], cidade2[20];
    unsigned long int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int pontosTuristicos, pontosTuristicos2;
    


    //criação da carta 1
    printf("-------Crie sua carta de trunfo!-------\n");

    printf("\n-------CARTA 1-------\n");
    printf("Digite uma letra de 'A' a 'H': \n");
    scanf(" %c", &estado);
    printf("Digite um númmero de '01' a '04': \n");
    scanf("%s", &codigo);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);
    printf("Digite o número de habitantes: \n");
    scanf("%lu", &populacao);
    printf("Digite o número da área da cidade: \n");
    scanf("%f", &area);
    printf("Digite o número do PIB da cidade: \n");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos);


    float densidade = populacao / area; //calculo de densidade da carta 1
    float pibper = pib / populacao; //calculo do pib per capita da carta 1

    //calcular super poder
    float superpoder = (float)populacao + area + pib + (float)pontosTuristicos + pibper + (1.0f / densidade);

    //criação da carta 2
    printf("\n-------CARTA 2-------\n");
    printf("Digite uma letra de 'A' a 'H': \n");
    scanf(" %c", &estado2);
    printf("Digite um númmero de '01' a '04': \n");
    scanf("%s", &codigo2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);
    printf("Digite o número de habitantes: \n");
    scanf("%lu", &populacao2);
    printf("Digite o número da área da cidade: \n");
    scanf("%f", &area2);
    printf("Digite o número do PIB da cidade: \n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    float densidade2 = populacao2 / area2; //calculo de densidade da carta 2
    float pibper2 = pib2 / populacao2; //calculo do pib per capita da carta 2

    //calcular super poder2
    float superpoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibper2 + (1.0f / densidade2);

    // Comparações
    int pop1_vence = (populacao > populacao2) ? 1 : 0;
    int area1_vence = (area > area2) ? 1 : 0;
    int pib1_vence = (pib > pib2) ? 1 : 0;
    int pontos1_vence = (pontosTuristicos > pontosTuristicos2) ? 1 : 0;
    int dens1_vence = (densidade < densidade2) ? 1 : 0; // menor densidade vence
    int pibper1_vence = (pibper > pibper2) ? 1 : 0;
    int super1_vence = (superpoder > superpoder2) ? 1 : 0;

    
    printf("\n-------Carta 1-------\n");

    printf("Estado: %c\n", estado);
    printf("Código: %c%s\n", estado, codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %lu\n", populacao);
    printf("Densidade Populacional: %.2f\n", densidade);
    printf("Pib per Capita: %.2f\n", pibper);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", pontosTuristicos);


    printf("\n-------Carta 2-------\n");

    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("Pib per Capita: %.2f\n", pibper2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);

    printf("\n------comparação------\n");
    printf("População: Carta 1 venceu (%d)\n", pop1_vence);
    printf("Área: Carta 1 venceu (%d)\n", area1_vence);
    printf("PIB: Carta 1 venceu (%d)\n", pib1_vence);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos1_vence);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", dens1_vence);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibper1_vence);
    printf("Super Poder: Carta 1 venceu (%d)\n", super1_vence);

    return 0;
}