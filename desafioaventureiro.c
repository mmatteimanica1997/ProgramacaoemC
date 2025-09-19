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
    
}  
