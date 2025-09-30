#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("=== CADASTRO DE CARTAS DO JOGO SUPER TRUNFO EM C === ");
    printf("\n");
    printf("\n");
    
    printf("→ Os estados serão representados por uma letra de A a H, sendo oito estados no total\n");

    printf("→ A população deve ser informada por um número inteiro.\n");

    printf("  - Ex: 17.000 sem '.' e ','.\n");

    printf("→ A letra varia de A a H, sendo oito letras no total, seguido de um número de 01 a 04, formando assim, o Código do Estado. \n");

    printf("  - Ex: B01 , D04 \n"); 

    char estado1;
    char codigo1[5];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float pibpercapita1;

    printf("Carta 1: \n");
    printf("Digite o estado: \n");
    scanf("%c", &estado1);
    printf("Digite o Código da Carta: \n");
    scanf("%s", codigo1);
    printf("Digite o Nome da Cidade: \n");
    scanf(" %[^\n]", cidade1);
    printf("Digite a População: \n");
    scanf("%d", &populacao1);
    printf("Digite a Área: \n");
    scanf("%f", &area1);
    printf("Digite o PIB: \n");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos1);

    densidade1 = populacao1 / area1;
    pibpercapita1 = (pib1 * 1000000000.0) / populacao1;


    char estado2;
    char codigo2[5];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float pibpercapita2;

    

    printf("Carta 2: \n");
    printf("Digite o estado: \n");
    scanf(" %c", &estado2);
    printf("Digite o Código da Carta: \n");
    scanf(" %s", codigo2);
    printf("Digite o Nome da Cidade: \n");
    scanf(" %[^\n]", cidade2);
    printf("Digite a População: \n");
    scanf(" %d", &populacao2);
    printf("Digite a Área: \n");
    scanf(" %f", &area2);
    printf("Digite o PIB: \n");
    scanf(" %f", &pib2);
    printf("Digite o número de pontos turísticos: \n");
    scanf(" %d", &pontos2);
    
    densidade2 = populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000.0) / populacao2;
   
    printf(" Carta 1: \n Estado: %c \n Código da Carta: %s \n Nome da Cidade: %s \n População (em habitantes): %d \n Área (em Km²): %.2f \n PIB (em bilhões de Reais): %.2f \n Número de Pontos Turísticos: %d \n Densidade Populacional(hab/km²): %.2f \n PIB per Capita (em reais): %.2f \n", estado1, codigo1, cidade1, populacao1, area1, pib1, pontos1, densidade1, pibpercapita1);
    printf(" \n Carta 2: \n Estado: %c \n Código da Carta: %s \n Nome da Cidade: %s \n População (em habitantes): %d \n Área (em Km²): %.2f \n PIB (em bilhões de Reais): %.2f \n Número de Pontos Turísticos: %d \n Densidade populacional(hab/km²): %.2f \n PIB per Capita (em reais): %.2f \n", estado2, codigo2, cidade2, populacao2, area2, pib2, pontos2, densidade2, pibpercapita2);
   
    printf("*******Calculo Super Poder Carta 1 *******\n");

    int comparacaopopulacao1;
    int comparacaoarea1;
    int comparacaopib1;
    int comparacaopontos1;
    int comparacaodensidade1;
    int comparacaopibpercapita1;
    int superpoder1;

    comparacaopopulacao1 = populacao1 > populacao2;
    printf("A carta 1 tem maior população: %d\n", comparacaopopulacao1);

    comparacaoarea1 = area1 > area2;
    printf("A carta um tem maior área: %d\n", comparacaoarea1);

    comparacaopib1 = pib1 > pib2;
    printf("A carta 1 tem um PIB maior: %d\n", comparacaopib1);

    comparacaopontos1 = pontos1 > pontos2;
    printf("A carta 1 tem mais pontos turísticos: %d\n", comparacaopontos1);

    comparacaodensidade1 = densidade1 < densidade2;
    printf("A carta 1 tem uma densidade populacional menor: %d\n", comparacaodensidade1);

    comparacaopibpercapita1 = pibpercapita1 > pibpercapita2;
    printf("A carta 1 tem um PIB per capita maior: %d\n", comparacaopibpercapita1);

    superpoder1 = comparacaopopulacao1 + comparacaoarea1 + comparacaopib1 + comparacaopontos1 + comparacaodensidade1 + comparacaopibpercapita1;
    printf("O Super - Poder da carta 1 é: %d\n", superpoder1);

    printf("*******Calculo Super Poder Carta 2 *******\n");

    int comparacaopopulacao2;
    int comparacaoarea2;
    int comparacaopib2;
    int comparacaopontos2;
    int comparacaodensidade2;
    int comparacaopibpercapita2;
    int superpoder2;

    comparacaopopulacao2= populacao2 > populacao1;
    printf("A carta 2 tem maior população: %d\n", comparacaopopulacao2);

    comparacaoarea2= area2 > area1;
    printf("A carta 2 tem maior área: %d\n", comparacaoarea2);

    comparacaopib2= pib2 > pib1;
    printf("A carta 2 tem um PIB maior: %d\n", comparacaopib2);

    comparacaopontos2= pontos2 > pontos1;
    printf("A carta 2 tem mais pontos turísticos: %d\n", comparacaopontos2);

    comparacaodensidade2 = densidade2 < densidade1;
    printf("A carta 2 tem uma densidade populacional menor: %d\n", comparacaodensidade2);

    comparacaopibpercapita2 = pibpercapita2 > pibpercapita1;
    printf("A carta 2 tem um PIB per capita maior: %d\n", comparacaopibpercapita2);

    superpoder2 = comparacaopopulacao2 + comparacaoarea2 + comparacaopib2 + comparacaopontos2 + comparacaodensidade2 + comparacaopibpercapita2;
    printf("O Super - Poder da carta 2 é: %d\n", superpoder2);

   if (superpoder1 > superpoder2) {
    printf("A carta 1 venceu");
} else {
    printf("A carta 2 venceu");
}
    }
    
