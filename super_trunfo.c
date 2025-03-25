#include <stdio.h>

int main() {

    //declarando as variáveis para a Carta 1
    char estado1, codigo1[3], cidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1;
    float superPoder1;

    //declarando as variáveis para a Carta 2
    char estado2, codigo2[3], cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2;
    float superPoder2;

    //Abertura do jogo
    printf("Bem vindo ao Super Trunfo!\n");

    //Entradas para a Carta 1
    printf("Informações para a Carta 1\n");

    printf("Informe uma letra de A a H representando o estado: ");
    scanf(" %c", &estado1);

    printf("Informe o código, sendo um número de 01 a 04: ");
    scanf("%s", codigo1);

    printf("Informe o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Informe o número de habitantes da cidade: ");
    scanf("%d", &populacao1);

    printf("Informe a área em quilometros quadrados da cidade: ");
    scanf("%f", &area1);

    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Informe o número de pontos turísticos da cidade: ");
    scanf("%d", &pontosTuristicos1);

    //Calculando a Densidade Populacional da Carta 1
    densidade1 = (float)populacao1 / area1;

    //Calculando o PIB per Capita da Carta 1
    pibPerCapita1 = pib1 / (float)populacao1;

    //Calculando o Super Poder da Carta 1
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1/densidade1);

    //Entradas para a Carta 2
    printf("Informações para a Carta 2\n");

    printf("Informe uma letra de A a H representando o estado: ");
    scanf(" %c", &estado2);
    
    printf("Informe o código, sendo um número de 01 a 04: ");
    scanf("%s", codigo2);
    
    printf("Informe o nome da cidade: ");
    scanf("%s", cidade2);
    
    printf("Informe o número de habitantes da cidade: ");
    scanf("%d", &populacao2);
    
    printf("Informe a área em quilometros quadrados da cidade: ");
    scanf("%f", &area2);
    
    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib2);
    
    printf("Informe o número de pontos turísticos da cidade: ");
    scanf("%d", &pontosTuristicos2);

    //Calculando a Densidade Populacional da Carta 2
    densidade2 = (float)populacao2 / area2;

    //Calculando o PIB per Capita da Carta 2
    pibPerCapita2 = pib2 / (float)populacao2;

    //Calculando o Super Poder da Carta 2
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1/densidade2);


    //Imprimindo as informações da Carta 1
    printf("Carta 1 \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c", estado1);
    printf("%s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder total: R$ %.2f\n", superPoder1);

    //Imprimindo as informações da Carta 2
    printf("Carta 2 \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c", estado2);
    printf("%s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder total: R$ %.2f\n", superPoder2);

    //Comparando as cartas
    printf("Resultados da partida!\n");
    printf("Resultado 1 - Carta 1 Vence\n");
    printf("Resultado 0 - Carta 2 Vence\n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade: %d\n", densidade1 < densidade2);
    printf("PIB per Capita: %d\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: %d\n", superPoder1 > superPoder2);

    //Comparando as cartas com estrutura de decisão if-else
    printf("O valor de área da Carta 1, referente à cidade %s é %.2f km²\n", cidade1, area1);
    printf("O valor de área da Carta 2, referente à cidade %s é %.2f km²\n", cidade2, area2);

    if (area1 > area2) {
        printf("Carta 1 - %s - venceu!\n", cidade1);
    } else {
        printf("Carta 2  - %s - venceu!\n", cidade2);
    }

    return 0;

}