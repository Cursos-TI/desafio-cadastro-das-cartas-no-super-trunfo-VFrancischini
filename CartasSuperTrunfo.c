#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas - Nivel Iniciante
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Feito de maneira Hard Coded inicialmente. Ao avançar os estudos aprimoraremos o código.

int main() {
    // Variáveis
    // Variáveis terminadas com 1 refere-se a Primeira Cidade
    // Terminadas com 2 refere-se a Segunda Cidade
    char nomeCidade1[20], codCarta1[4], estado1, nomeCidade2[20], codCarta2[4], estado2;
    int qtdPontosTuristicos1, populacao1, qtdPontosTuristicos2, populacao2;
    float pib1, area1, densidadePop1, pibPerCapita1, pib2, area2, densidadePop2, pibPerCapita2;

    // Cadastro das Cartas:
    // Primeira Cidade:
    printf("Preencha os campos abaixo:\n");
    printf("OBS: Código da carta é a combinação da letra do estado(A a H) e o número da cidade(01 a 04) ex: A01\n\n");
    printf("Primeira Cidade:\n");

    printf("Estado: ");
    scanf("%c", &estado1);
    
    printf("Nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade1); // " %[^\n]s" serve para aceitar espaços. ex: São Paulo. Tem esse espaço inical para não pular o input

    printf("Código da carta: ");
    scanf("%s", codCarta1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &qtdPontosTuristicos1);

    printf("Densidade Populacional: ");
    scanf("%f", &densidadePop1);

    printf("PIB per Capita: ");
    scanf("%f", &pibPerCapita1);

    // Segunda Cidade:
    printf("\nSegunda Cidade:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    
    printf("Nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade2);

    printf("Código da carta: ");
    scanf("%s", codCarta2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &qtdPontosTuristicos2);

    printf("Densidade Populacional: ");
    scanf("%f", &densidadePop2);

    printf("PIB per Capita: ");
    scanf("%f", &pibPerCapita2);

    // Exibição dos Dados das Cartas:
    // Primeira Cidade
    printf("\n=====================================\n");
    printf("Dados inseridos:\n");
    printf("\nPrimeira Carta:\n");
    printf("Código da carta: %s\n", codCarta1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("Estado: %c\n", estado1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f Bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", qtdPontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePop1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Segunda Cidade
    printf("\nSegunda Carta:\n");
    printf("Código da carta: %s\n", codCarta2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("Estado: %c\n", estado2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", qtdPontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePop2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}
