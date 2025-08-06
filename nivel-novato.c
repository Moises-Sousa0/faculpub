#include <stdio.h>

int main(){
    char estado, estado2;
    char codigo[5], codigo2[5];
    char cidade[20], cidade2[20];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int pontosTuristicos, pontosTuristicos2;


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


    printf("\n-------Carta 1-------\n");

    printf("Estado: %c\n", estado);
    printf("Código: %c%s\n", estado, codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Pontos turísticos: %d\n", pontosTuristicos);


    printf("\n-------Carta 2-------\n");

    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);

    return 0;
}