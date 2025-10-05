#include <stdio.h>
#include <locale.h>
//...existing code...

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){

setlocale(LC_ALL, "pt_BR.UTF-8"); // para suporte a acentuação em português

// tipos de dados
// int - inteiro
// flaot - real
// char - caractere
// declaração de variaveis 01
char pais[50];
char estados[50];
char cidade[50];
float  Populacao;
int Pontos_turisticos;
float Area;
float PIB;
float Densidade_populacional;
float PIB_per_capita;
// fim da declaração de variaveis 01

//declaracao de variaveis 02
char pais2[50];
char estados2[50];
char cidade2[50];
float Populacao2;
int Pontos_turisticos2;
float Area2;
float PIB2;
float densidade_populacional2;
float PIB_per_capita2;
// fim da declaração de variaveis 01 e 02

//sintaxe de impressao
printf ("Vamos cadastrar 02 Paises. \n");
printf ("Cadastro do Pais 01: \n");

//entrada de dados 01
printf ("digite o nome do Pais: \n");
scanf ("%s", pais);

printf ("digite o nome do estado: \n");
scanf ("%s", estados);

printf ("digite seu nome da cidade: \n");
scanf ("%s", cidade);

printf ("digite sua Aria; \n");
scanf ("%f", &Area);

printf ("digite seu PIB; \n");
scanf ("%f", &PIB);

printf ("digite da sua Populacao: \n");
scanf ("%f", &Populacao);

printf ("Quantos pontos turisticos: \n");
scanf ("%d", &Pontos_turisticos);

//calculo da densidade populacional e PIB per capita 
Densidade_populacional = (Populacao / Area);
PIB_per_capita = (PIB / Populacao);

// fim da entrada de dados 01 

//sintaxe de impressao
printf ("Vamos cadastrar o segundo pais! \n");
printf ("Cadastro do Pais 02: \n");

//inicio de cadastro 02
printf ("digite o nome do Pais: \n");
scanf ("%s", pais2);

printf ("digite o nome do estado: \n");
scanf ("%s", estados2);

printf ("digite o nome da cidade: \n");
scanf ("%s", cidade2);

printf ("digite sua Aria: \n");
scanf ("%f", &Area2);

printf ("digite seu PIB: \n");
scanf ("%f", &PIB2);

printf ("digite da sua Populacao: \n");
scanf ("%f", &Populacao2);

printf ("Quantos pontos turisticos: \n");
scanf ("%d", &Pontos_turisticos2);

//calculo da densidade populacional e PIB per capita
densidade_populacional2 = (Populacao2 / Area2);
PIB_per_capita2 = (PIB2 / Populacao2);

//fim da entrada de dasdos 02

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
printf (" -Populacao: %f \n", Populacao);
printf (" -Area: %.2f km²\n", Area);
printf (" -PIB: %.2f bilhoes\n", PIB);
printf (" -Pontos turisticos: %d \n", Pontos_turisticos);
printf (" -Densidade populacional é: %f\n", Densidade_populacional);
printf (" -PIB per capita é: %f\n", PIB_per_capita);

// fim da saida de dados 01

//sintaxe de impressao 02

printf ("Pais 02 cadastrado com sucesso! \n");

//saida de dados 02
//mostra na tela os dados cadastrados

printf (" - Pais: %s \n", pais2);
printf (" - estado: %s \n", estados2);
printf (" -cidade: %s \n", cidade2);
printf (" -populacao: %f \n", Populacao2);
printf (" -Area: %.2f km²\n", Area2);
printf (" -PIB: %.2f bilhoes\n", PIB2);
printf (" -Pontos turisticos: %d \n", Pontos_turisticos2);
printf (" -Densidade populacional é: %f\n", densidade_populacional2);
printf (" -PIB per capita é: %f\n", PIB_per_capita2);



// fim da saida de dasos 02

return 0;

}
