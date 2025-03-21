#include <stdio.h>


int main() {
    // Variáveis para a primeira carta
    int populacao1, pontos_turisticos1;
    float area1, PIB1;
    char cidade1[20], codigo1[3], estado1;
   
    // Variáveis para a segunda carta
    int populacao2, pontos_turisticos2;
    float area2, PIB2;
    char cidade2[20], codigo2[3], estado2;

    // calculos de atributos das cartas
    float pib_per_capita1, densidade_populacional1, pib_per_capita2, densidade_populacional2;
    float poder_cidade1, poder_cidade2;




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

    // calculo de densidade e pib per capita da carta 1
    densidade_populacional1 = (float) populacao1 / area1;
    pib_per_capita1 = (PIB1 * 1000000000) / (float) populacao1;

    // calculo do poder da carta 1 --> desafio mestre
    poder_cidade1 = PIB1 + (float)populacao1 + area1 + 1/densidade_populacional1 + pontos_turisticos1 + pib_per_capita1;


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

    // calculo de densidade e pib per capita da carta 2
    densidade_populacional2 = (float) populacao2 / area2;
    pib_per_capita2 = (PIB2 * 1000000000) / (float) populacao2;



    // calculo do poder da carta 2 --> desafio mestre
    poder_cidade2 = PIB2 + (float)populacao2 + area2 + 1/densidade_populacional2 + pontos_turisticos2 + pib_per_capita2;



    // Exibição dos dados da primeira carta
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Código: %c-%s\n", estado1, codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", PIB1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);

    //Parte do desafio nivel aventureiro
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais \n", pib_per_capita1);

    // desafio mestre
    printf("Poder carta 1: %.2f \n\n", poder_cidade1);




    // Exibição dos dados da segunda carta
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Código: %c-%s\n", estado2, codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", PIB2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);

    //Parte do desafio nivel aventureiro
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais \n", pib_per_capita2);

    // nivel mestre
    printf("Poder carta 2: %.2f \n", poder_cidade2);




    // comparando as cartas 1 para carta 1 e 0 para carta 2
    printf("\n\n <===== RESULTADO =====> \n\n");
    printf("População: (%d) \n", populacao1 > populacao2);
    printf("Área: (%d) \n", area1 > area2);
    printf("PIB:n (%d) \n", PIB2 > PIB1);
    printf("Pontos turisticos: (%d) \n", pontos_turisticos2 > pontos_turisticos1);
    printf("Densidade poulacional: (%d) \n", densidade_populacional1 < densidade_populacional2); // aqui eu estou considerando que quanto menor a quantidade populacional melhor
    printf("PIB per capita: (%d) \n", pib_per_capita1 > pib_per_capita2);
    printf("Poder: (%d) \n\n\n", poder_cidade2 > poder_cidade2);

    return 0;
}