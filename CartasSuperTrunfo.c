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
    char comparacaoPop, comparacaoArea, comparacaoPIB, comparacaoPtTuristicos, comparacaoDensPop, comparacaoPIBPerCap, comparacaoSuperPoder;
    int qtdPontosTuristicos1, qtdPontosTuristicos2;
    unsigned long int populacao1, populacao2;
    float pib1, area1, densidadePop1, pibPerCapita1, superPoder1, pib2, area2, densidadePop2, pibPerCapita2, superPoder2;
    long double inversoDensidadePop1, inversoDensidadePop2;

    // Cadastro das Cartas:
    // Primeira Cidade:
    printf("Preencha os campos abaixo:\n");
    printf("OBS: Código da carta é a combinação da letra do estado(A a H) e o número da cidade(01 a 04) ex: A01\n\n");
    printf("Primeira Cidade:\n");

    printf("Estado: ");
    scanf("%c", &estado1);
    
    printf("Código da carta: ");
    scanf("%s", codCarta1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade1); // " %[^\n]s" serve para aceitar espaços. ex: São Paulo. Tem esse espaço inical para não pular o input

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &qtdPontosTuristicos1);

    // Segunda Cidade:
    printf("\nSegunda Cidade:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    
    printf("Código da carta: ");
    scanf("%s", codCarta2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &qtdPontosTuristicos2);

    // Calculo PIB per Capita e Densidade Populacional
    // Primeira Carta
    densidadePop1 = populacao1 / area1;
    pibPerCapita1 = (pib1 / populacao1) * 1e9;

    // Segunda Carta
    densidadePop2 = populacao2 / area2;
    pibPerCapita2 = (pib2 / populacao2) * 1e9;

    // Calculo Super Poder
    // Primeira Carta
    inversoDensidadePop1 = (1/densidadePop1);
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)qtdPontosTuristicos1 + pibPerCapita1 + inversoDensidadePop1;

    // Segunda Carta
    inversoDensidadePop2 = (1/densidadePop2);
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)qtdPontosTuristicos2 + pibPerCapita2 + inversoDensidadePop2;

    // Comparação de Cartas
    // 1 - Carta 1 ganha
    // 0 - Carta 2 ganha
    comparacaoPop = populacao1 > populacao2 ? 1 : 0;
    comparacaoArea = area1 > area2 ? 1 : 0;
    comparacaoPIB = pib1 > pib2 ? 1 : 0;
    comparacaoPtTuristicos = qtdPontosTuristicos1 > qtdPontosTuristicos2 ? 1 : 0;
    comparacaoDensPop = densidadePop1 < densidadePop2 ? 1 : 0;
    comparacaoPIBPerCap = pibPerCapita1 > pibPerCapita2 ? 1 : 0;
    comparacaoSuperPoder = superPoder1 > superPoder2 ? 1 : 0;

    // Exibição dos Dados das Cartas:
    // Primeira Cidade
    printf("\n=====================================\n");
    printf("Dados inseridos:\n");
    printf("\nPrimeira Carta:\n");
    printf("Código da carta: %s\n", codCarta1);
    printf("Super Poder da carta: %.2f\n", superPoder1);
    printf("Estado: %c\n", estado1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f Bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", qtdPontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePop1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Segunda Cidade
    printf("\nSegunda Carta:\n");
    printf("Código da carta: %s\n", codCarta2);
    printf("Super Poder da carta: %.2f\n", superPoder2);
    printf("Estado: %c\n", estado2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", qtdPontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePop2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // Exibição da comparação de Cartas
    printf("\nComparação de Cartas:\n");
    printf("População: %s (%d)\n", comparacaoPop ? "Carta 1 venceu" : "Carta 2 Venceu", comparacaoPop);
    printf("Área: %s (%d)\n", comparacaoArea ? "Carta 1 venceu" : "Carta 2 Venceu", comparacaoArea);
    printf("PIB: %s (%d)\n", comparacaoPIB ? "Carta 1 venceu" : "Carta 2 Venceu", comparacaoPIB);
    printf("Densidade Populacional: %s (%d)\n", comparacaoDensPop ? "Carta 1 venceu" : "Carta 2 Venceu", comparacaoDensPop);
    printf("PIB per Capita: %s (%d)\n", comparacaoPIBPerCap ? "Carta 1 venceu" : "Carta 2 Venceu", comparacaoPIBPerCap);
    printf("Super Poder: %s (%d)\n", comparacaoSuperPoder ? "Carta 1 venceu" : "Carta 2 Venceu", comparacaoSuperPoder);

    return 0;
}
