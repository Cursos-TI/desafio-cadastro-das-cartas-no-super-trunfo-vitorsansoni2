#include <stdio.h>

    int main() {
 
    // Parte 1: Definindo variaveis para os atributos.
    // Carta Um - Cidade Taubaté
    
    char estado[20] = "SaoPaulo";
    char codigo[20] = "A01";
    char nome[20] = "Taubate";
    int populacao = 321299;
    float area = 625.004;
    float pib = 14988466;
    int pontosturisticos = 5;
    float Densidade_populacional;
    float PIB_per_capita;

    // Atribuindo operadores matematicos

    /*
    Atribuição simples (=)
    Atribuição soma (+=)
    atribuição subtração (-=)
    atribuição multiplicação (*=)
    atribuição divisão (/=)
    */

    
    // Parte 2: imprimindo os valores na tela.
    
    printf("Estado: %s\n", estado);
    printf("Codigo da Carta: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("Populacao: %i\n", populacao);
    printf("area em km²: %f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Numero de Pontos Turisticos: %i\n", pontosturisticos);
    printf("Densidade Populacional %.2f", populacao / area);
    printf("PIB per capita: %.2f", pib / populacao);


    printf ("\n");

    // parte 3 : Definindo variaveis para os atributos Carta Dois.
    // Carta Dois - Cidade Ubatuba

    char estado2[20] = "SaoPaulo";
    char codigo2[20] = "A02";
    char nome2[20] = "Ubatuba";
    int populacao2 = 92819;
    float area2 = 708.105;
    float pib2 = 723522.919;
    int pontosturisticos2 = 15;
    float Densidade_populacional2;
    float PIB_per_capita2;

    
    // Parte 4: Imprimindo os valores da Carta Dois

    printf("Estado: %s\n", estado2);
    printf("Codigo da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("Populacao: %i\n", populacao2);
    printf("area em km²: %f\n", area2);
    printf("PIB: %.2f\n", pib);
    printf("Numero de Pontos Turisticos: %i\n", pontosturisticos2);
    printf("Densidade Populacional %.2f", populacao2 / area2);
    printf("PIB per capita: %.2f", pib2 / populacao2);

    // Separando para deixar organizado.
    
    printf ("\n");
    
    return 0;


    }