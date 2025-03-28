#include <stdio.h>

int main() {

// Criação carta 1
// Definindo variaveis para as cartas um e dois

char codigo[20] = "A01";
char nome_da_cidade[20] = "Taubate";
int populacao = 321.299;
float Area = 625.004;
float PIB = 50563.09;
int pontoturistico = 6;

// Inicializando variaveis

printf ("Codigo do Estado é: \n");
printf ("Nome da Cidade é: \n");
printf ("A Populacao é: \n");
printf ("A Area é: \n");
printf ("O PIB é:  \n");
printf ("Numero de Pontos Turisticos é: \n");

// Exibindo os valores

scanf ("%s" , codigo);
scanf ("%s" , nome_da_cidade);
scanf ("%i" , populacao);
scanf ("%f" , Area);
scanf ("%f" , PIB);
scanf ("%i" , pontoturistico);

// leitura dos valores carta Um


return 0;

}