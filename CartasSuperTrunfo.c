#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

// declaracao de variaveis 01
// tipos de dados
// int - inteiro
// flaot - real
// char - caractere
char pais[20];
char estados[20];
char cidade[50];
int  Populacao;
int Pontos_turisticos;
float Area;
float PIB;

//declaracao de variaveis 02
char pais2[20];
char estados2[20];
char cidade2[50];
int Populacao2;
int Pontos_turisticos2;
float Area2;
float PIB2;

  // Área para entrada de dados

//sintaxe de impressao
printf ("Vamos cadastrar 02 Paises. \n");
printf ("Cadastro do Pais 01: \n");

//entrada de dados 01
printf ("digite o nome do Pais: \n");
scanf ("%s", &pais);

printf ("digite o nome do estado: \n");
scanf ("%s", &estados);

printf ("digite seu nome da cidade: \n");
scanf ("%s", &cidade);

printf ("digite sua Aria: \n");
scanf ("%f", &Area);

printf ("digite seu PIB; \n");
scanf ("%f", &PIB);

printf ("digite da sua Populacao: \n");
scanf ("%d", &Populacao);

printf ("Quantos pontos turisticos: \n");
scanf ("%d", &Pontos_turisticos);
// fim da entrada de dados 01 

//sintaxe de impressao
printf ("Vamos cadastrar o segundo pais! \n");
printf ("Cadastro do Pais 02: \n");

//inicio de cadastro 02
printf ("digite o nome do Pais: \n");
scanf ("%s", &pais2);

printf ("digite o nome do estado: \n");
scanf ("%s", &estados2);

printf ("digite o nome da cidade: \n");
scanf ("%s", &cidade2);

printf ("digite sua Aria: \n");
scanf ("%f", &Area2);

printf ("digite seu PIB: \n");
scanf ("%f", &PIB2);
//fim da entrada de dasdos 02

  // Área para exibição dos dados da cidade

//confirmaçao de cadastros

// titulo
printf ("TODOS OS PAISES CADASTRDOS COM SUCESSO! \n");
// fim do titulo

//sintaxe de impressao 01

printf ("Pais 01 cadastrado com sucesso! \n");

// saida de dados
//mostra na  tela os dados cadastrados

printf (" -Pais: %s \n", pais);
printf (" -estado: %s \n", estados);
printf (" -cidade: %s \n", cidade);
printf (" -Populacao: %d \n", Populacao);
printf (" -Area: %.2f km²\n", Area);
printf (" -PIB: %.2f bilhoes\n", PIB);
printf (" -Pontos turisticos: %d \n", Pontos_turisticos);

// fim da saida de dados 01

//sintaxe de impressao 02

printf ("Pais 02 cadastrado com sucesso! \n");

//saida de dados 02
//mostra na tela os dados cadastrados

printf (" - Pais: %s \n", pais2);
printf (" - estado: %s \n", estados2);
printf (" -cidade: %s \n", cidade2);
printf (" -populacao: %d \n", Populacao2);
printf (" -Area: %.2f km²\n", Area2);
printf (" -PIB: %.2f bilhoes\n", PIB2);
printf (" -Pontos turisticos: %d \n", Pontos_turisticos2);

// fim da saida de dasos 02

return 0;
} 
