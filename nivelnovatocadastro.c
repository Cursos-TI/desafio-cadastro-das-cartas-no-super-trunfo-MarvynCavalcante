#include <stdio.h>

int main() {
    // Declaração de variáveis para armazenar os atributos das cartas
    char estado1, estado2;
    int cidade1, cidade2;
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Cadastro da primeira carta
    printf("Cadastro da primeira carta:\n");
    printf("Informe o estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Informe o número da cidade (1-4): ");
    scanf("%d", &cidade1);
    printf("Informe a população: ");
    scanf("%d", &populacao1);
    printf("Informe a área: ");
    scanf("%f", &area1);
    printf("Informe o PIB: ");
    scanf("%f", &pib1);
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cadastro da segunda carta
    printf("\nCadastro da segunda carta:\n");
    printf("Informe o estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Informe o número da cidade (1-4): ");
    scanf("%d", &cidade2);
    printf("Informe a população: ");
    scanf("%d", &populacao2);
    printf("Informe a área: ");
    scanf("%f", &area2);
    printf("Informe o PIB: ");
    scanf("%f", &pib2);
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos dados cadastrados
    printf("\nCartas cadastradas:\n");

    printf("\nCarta 1 - Código: %c%d\n", estado1, cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2 - Código: %c%d\n", estado2, cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);

    return 0;
}