#include <stdio.h>

int main() {
    // Dados da primeira cidade
    char estado1;
    char codigo1[10];
    char nome1[100];
    int populacao1;
    float area1;
    double pib1;
    int pontos1;

    // Dados da segunda cidade
    char estado2;
    char codigo2[10];
    char nome2[100];
    int populacao2;
    float area2;
    double pib2;
    int pontos2;

    // Variáveis calculadas
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    // Entrada dos dados da primeira cidade
    printf("Carta 1:\n");

    printf("Estado: \n");
    scanf("%c", &estado1);

    printf("Código: \n");
    scanf("%s", &codigo1);

    printf("Nome da Cidade: \n");
    scanf("%f", &nome1);

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Área (em km²): \n");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): \n");
    scanf("%lf", &pib1);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontos1);

    // Entrada dos dados da segunda cidade
    printf("\nCarta 2:\n");

    printf("Estado: \n");
    scanf(" %c", &estado2);

    printf("Código: \n");
    scanf("%s", &codigo2);

    printf("Nome da Cidade: \n");
    scanf(" %f", &nome2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Área (em km²): \n");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): \n");
    scanf("%lf", &pib2);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontos2);

    // Cálculos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Saída formatada
    printf("\n--- Resultado ---\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}
