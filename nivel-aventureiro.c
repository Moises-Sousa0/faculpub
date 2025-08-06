#include <stdio.h>

int main(){
    char estado, estado2;
    char codigo[5], codigo2[5];
    char cidade[20], cidade2[20];
    int populacao, populacao2;
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
    scanf("%d", &populacao);
    printf("Digite o número da área da cidade: \n");
    scanf("%f", &area);
    printf("Digite o número do PIB da cidade: \n");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos);


    float densidade = populacao / area; //calculo de densidade da carta 1
    float pibper = pib / populacao; //calculo do pib per capita da carta 1

    //criação da carta 2
    printf("\n-------CARTA 2-------\n");
    printf("Digite uma letra de 'A' a 'H': \n");
    scanf(" %c", &estado2);
    printf("Digite um númmero de '01' a '04': \n");
    scanf("%s", &codigo2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);
    printf("Digite o número de habitantes: \n");
    scanf("%d", &populacao2);
    printf("Digite o número da área da cidade: \n");
    scanf("%f", &area2);
    printf("Digite o número do PIB da cidade: \n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    float densidade2 = populacao2 / area2; //calculo de densidade da carta 2
    float pibper2 = pib2 / populacao2; //calculo do pib per capita da carta 2


    printf("\n-------Carta 1-------\n");

    printf("Estado: %c\n", estado);
    printf("Código: %c%s\n", estado, codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Densidade Populacional: %.2f\n", densidade);
    printf("Pib per Capita: %.2f\n", pibper);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", pontosTuristicos);


    printf("\n-------Carta 2-------\n");

    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("Pib per Capita: %.2f\n", pibper2);
    printf("Área: %2.f\n", area2);
    printf("PIB: %2.f\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);

    return 0;
}