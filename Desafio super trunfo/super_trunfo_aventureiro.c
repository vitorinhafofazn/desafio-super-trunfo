#include <stdio.h>

int main() {
    // Variáveis para Carta 1
    char codigo1[4];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade1;
    float pib_per_capita1;

    // Variáveis para Carta 2
    char codigo2[4];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade2;
    float pib_per_capita2;

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1\n");
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%3s", codigo1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculos da Carta 1
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    printf("\n");

    // Cadastro da Carta 2
    printf("Cadastro da Carta 2\n");
    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%3s", codigo2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos da Carta 2
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    printf("\n----- Dados das Cartas -----\n");

    // Exibição da Carta 1
    printf("Carta 1\n");
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de pontos turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);

    printf("\n");

    // Exibição da Carta 2
    printf("Carta 2\n");
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);

    return 0;
}