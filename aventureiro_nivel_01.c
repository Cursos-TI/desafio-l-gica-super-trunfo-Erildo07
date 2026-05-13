#include <stdio.h>

int main() {

    printf("=====================================\n");
    printf("      SUPER TRUNFO - PAISES\n");
    printf("=====================================\n\n");

    // CARTA 1
    char estado1;
    char codigo1[10];
    char cidade1[50];

    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;

    // CARTA 2
    char estado2;
    char codigo2[10];
    char cidade2[50];

    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;

    int opcao;

    // =========================
    // CADASTRO CARTA 1
    // =========================

    printf("=== CADASTRO CARTA 1 ===\n");

    printf("Estado (A-Z): ");
    scanf(" %c", &estado1);

    printf("Codigo da carta: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    densidade1 = populacao1 / area1;

    // =========================
    // CADASTRO CARTA 2
    // =========================

    printf("\n=== CADASTRO CARTA 2 ===\n");

    printf("Estado (A-Z): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = populacao2 / area2;

    // =========================
    // EXIBIR DADOS
    // =========================

    printf("\n=== CARTA 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", densidade1);

    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidade2);

    // =========================
    // MENU INTERATIVO
    // =========================

    printf("\n=== MENU DE COMPARACAO ===\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");

    printf("Escolha um atributo: ");
    scanf("%d", &opcao);

    // =========================
    // COMPARAÇÃO
    // =========================

    switch(opcao) {

        case 1:

            printf("\nComparando Populacao...\n");

            if (populacao1 > populacao2) {
                printf("Carta 1 venceu!\n");
            } else if (populacao2 > populacao1) {
                printf("Carta 2 venceu!\n");
            } else {
                printf("Empate!\n");
            }

            break;

        case 2:

            printf("\nComparando Area...\n");

            if (area1 > area2) {
                printf("Carta 1 venceu!\n");
            } else if (area2 > area1) {
                printf("Carta 2 venceu!\n");
            } else {
                printf("Empate!\n");
            }

            break;

        case 3:

            printf("\nComparando PIB...\n");

            if (pib1 > pib2) {
                printf("Carta 1 venceu!\n");
            } else if (pib2 > pib1) {
                printf("Carta 2 venceu!\n");
            } else {
                printf("Empate!\n");
            }

            break;

        case 4:

            printf("\nComparando Pontos Turisticos...\n");

            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Carta 1 venceu!\n");
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Carta 2 venceu!\n");
            } else {
                printf("Empate!\n");
            }

            break;

        case 5:

            printf("\nComparando Densidade Populacional...\n");

            // MENOR VALOR VENCE

            if (densidade1 < densidade2) {
                printf("Carta 1 venceu!\n");
            } else if (densidade2 < densidade1) {
                printf("Carta 2 venceu!\n");
            } else {
                printf("Empate!\n");
            }

            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}