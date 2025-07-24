#include <stdio.h>

int main() {
    // Declaração das variáveis da Carta 1
    char estado1[50], nome1[50];
    unsigned long int populacao1;
    float area1, pib1, densidade1, pib_per_capita1, super_poder1;
    int pontos_turisticos1;

    // Declaração das variáveis da Carta 2
    char estado2[50], nome2[50];
    unsigned long int populacao2;
    float area2, pib2, densidade2, pib_per_capita2, super_poder2;
    int pontos_turisticos2;

    // Entrada dos dados da Carta 1
    printf("Digite o estado da Carta 1: ");
    scanf("%s", estado1);
    printf("Digite o nome da Carta 1: ");
    scanf("%s", nome1);
    printf("Digite a populacao da Carta 1: ");
    scanf("%lu", &populacao1);
    printf("Digite a area da Carta 1: ");
    scanf("%f", &area1);
    printf("Digite o PIB da Carta 1: ");
    scanf("%f", &pib1);
    printf("Digite os pontos turisticos da Carta 1: ");
    scanf("%d", &pontos_turisticos1);

    // Entrada dos dados da Carta 2
    printf("\nDigite o estado da Carta 2: ");
    scanf("%s", estado2);
    printf("Digite o nome da Carta 2: ");
    scanf("%s", nome2);
    printf("Digite a populacao da Carta 2: ");
    scanf("%lu", &populacao2);
    printf("Digite a area da Carta 2: ");
    scanf("%f", &area2);
    printf("Digite o PIB da Carta 2: ");
    scanf("%f", &pib2);
    printf("Digite os pontos turisticos da Carta 2: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos Carta 1
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1 / densidade1);

    // Cálculos Carta 2
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1 / densidade2);

    // Comparações
    printf("\nComparacao de Cartas:\n");
    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder1 > super_poder2);

    return 0;
}
