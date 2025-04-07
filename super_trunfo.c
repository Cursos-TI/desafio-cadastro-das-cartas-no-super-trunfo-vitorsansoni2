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

    // Parte 2: imprimindo os valores na tela.
    
    printf("Estado: %s\n", estado);
    printf("Codigo da Carta: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("Populacao: %i\n", populacao);
    printf("area em km²: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Numero de Pontos Turisticos: %i\n", pontosturisticos);

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
    
    // Parte 4: Imprimindo os valores da Carta Dois

    printf("Estado: %s\n", estado2);
    printf("Codigo da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("Populacao: %i\n", populacao2);
    printf("area em km²: %f\n", area2);
    printf("PIB: %f\n", pib);
    printf("Numero de Pontos Turisticos: %i\n", pontosturisticos2);

    // Separando para deixar organizado.
    
    printf ("\n");
    return 0;

    }