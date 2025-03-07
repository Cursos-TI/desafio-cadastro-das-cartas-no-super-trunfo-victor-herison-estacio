#include <stdio.h>
#include <stdlib.h>

int main() {
    // Variáveis para a primeira carta
    int populacao1, pontos_turisticos1;
    float area1, PIB1;
    char cidade1[20], codigo1[3], estado1;

    // Variáveis para a segunda carta
    int populacao2, pontos_turisticos2;
    float area2, PIB2;
    char cidade2[20], codigo2[3], estado2;

    // Cadastro da primeira carta
    printf("------ Cartas Super Trunfo ------\n");
    printf("------! Cadastrar primeira carta !------\n");

    printf("\nInsira o nome do estado (A-H): ");
    scanf(" %c", &estado1); // Lê o estado (um caractere)

    printf("Insira o nome da cidade: ");
    scanf("%s", cidade1); // Lê o nome da cidade

    printf("Insira o codigo da cidade (2 dígitos): ");
    scanf("%s", codigo1); // Lê o código da cidade

    printf("Insira a população da cidade: ");
    scanf("%d", &populacao1); // Lê a população

    printf("Insira a área da cidade (em km²): ");
    scanf("%f", &area1); // Lê a área

    printf("Insira o PIB da cidade (em bilhões): ");
    scanf("%f", &PIB1); // Lê o PIB

    printf("Insira a quantidade de pontos turisticos na cidade: ");
    scanf("%d", &pontos_turisticos1); // Lê os pontos turísticos

    // Cadastro da segunda carta
    printf("\n------! Cadastrar segunda carta !------\n");

    printf("Insira o nome do estado (A-H): ");
    scanf(" %c", &estado2); // Lê o estado (um caractere)

    printf("Insira o nome da cidade: ");
    scanf("%s", cidade2); // Lê o nome da cidade

    printf("Insira o codigo da cidade (2 dígitos): ");
    scanf("%s", codigo2); // Lê o código da cidade

    printf("Insira a população da cidade: ");
    scanf("%d", &populacao2); // Lê a população

    printf("Insira a área da cidade (em km²): ");
    scanf("%f", &area2); // Lê a área

    printf("Insira o PIB da cidade (em bilhões): ");
    scanf("%f", &PIB2); // Lê o PIB

    printf("Insira a quantidade de pontos turisticos na cidade: ");
    scanf("%d", &pontos_turisticos2); // Lê os pontos turísticos

    // Exibição dos dados da primeira carta
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Código: %c-%s\n", estado1, codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", PIB1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);

    // Exibição dos dados da segunda carta
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Código: %c-%s\n", estado2, codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", PIB2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}