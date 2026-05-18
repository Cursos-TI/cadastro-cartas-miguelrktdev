#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    // =========================
    // CARTA 1
    // =========================

    char estado1;
    char codigo1[5];
    char cidade1[50];

    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;

    // =========================
    // CARTA 2
    // =========================

    char estado2;
    char codigo2[5];
    char cidade2[50];

    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    // =========================
    // CADASTRO CARTA 1
    // =========================

    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da carta (ex: A01): ");
    scanf("%4s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area em km²: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // =========================
    // CADASTRO CARTA 2
    // =========================

    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta (ex: B02): ");
    scanf("%4s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area em km²: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // =========================
    // CALCULOS CARTA 1
    // =========================
    
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    superPoder1 =
        populacao1 +
        area1 +
        pib1 +
        pontosTuristicos1 +
        pibPerCapita1 +
        (1 / densidadePopulacional1);

    // =========================
    // CALCULOS CARTA 2
    // =========================

    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    superPoder2 =
        populacao2 +
        area2 +
        pib2 +
        pontosTuristicos2 +
        pibPerCapita2 +
        (1 / densidadePopulacional2);

    // =========================
    // EXIBICAO CARTA 1
    // =========================

    printf("\n=========== CARTA 1 ===========\n");

    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu habitantes\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    // =========================
    // EXIBICAO CARTA 2
    // =========================

    printf("\n=========== CARTA 2 ===========\n");

    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu habitantes\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // =========================
    // COMPARACOES
    // =========================

    printf("\n=========== COMPARACOES ===========\n");

    printf("Populacao: %s\n",
        (populacao1 > populacao2)
        ? "Carta 1 venceu!"
        : "Carta 2 venceu!");

    printf("Area: %s\n",
        (area1 > area2)
        ? "Carta 1 venceu!"
        : "Carta 2 venceu!");

    printf("PIB: %s\n",
        (pib1 > pib2)
        ? "Carta 1 venceu!"
        : "Carta 2 venceu!");

    printf("Pontos Turisticos: %s\n",
        (pontosTuristicos1 > pontosTuristicos2)
        ? "Carta 1 venceu!"
        : "Carta 2 venceu!");

    // Menor densidade vence
    printf("Densidade Populacional: %s\n",
        (densidadePopulacional1 < densidadePopulacional2)
        ? "Carta 1 venceu!"
        : "Carta 2 venceu!");

    printf("PIB per Capita: %s\n",
        (pibPerCapita1 > pibPerCapita2)
        ? "Carta 1 venceu!"
        : "Carta 2 venceu!");

    printf("Super Poder: %s\n",
        (superPoder1 > superPoder2)
        ? "Carta 1 venceu!"
        : "Carta 2 venceu!");

    return 0;
} 
