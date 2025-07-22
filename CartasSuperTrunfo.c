#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Variáveis para a primeira carta
    char codigo[4];
    int populacao;
    float area;
    float pib;
    int pontos;

    // Variáveis para a segunda carta
    char codigo1[4];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // Entrada dos dados da primeira carta
    printf("\nDigite o codigo da carta 1: ");
    scanf("%s", codigo);

    printf("Digite a populacao da carta 1: ");
    scanf("%d", &populacao);

    printf("Digite a area da carta 1: ");
    scanf("%f", &area);

    printf("Digite o PIB da carta 1: ");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos da carta 1: ");
    scanf("%d", &pontos);

    // Exibição dos dados da carta 1
    printf("\nCarta 1\n");
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turisticos: %d\n", pontos);

    // Entrada dos dados da segunda carta
    printf("\nDigite o codigo da carta 2: ");
    scanf("%s", codigo1);

    printf("Digite a populacao da carta 2: ");
    scanf("%d", &populacao1);

    printf("Digite a area da carta 2: ");
    scanf("%f", &area1);

    printf("Digite o PIB da carta 2: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos da carta 2: ");
    scanf("%d", &pontos1);

    // Exibição dos dados da carta 2
    printf("\nCarta 2\n");
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);

    scanf("%*c"); // Limpa o buffer de entrada
    printf("\nPressione Enter para sair...");
    getchar(); // Aguarda o usuário pressionar Enter
    // Fim do programa


    return 0;
}
