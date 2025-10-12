#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h> // Para a função strtok

int main(){

    setlocale(LC_ALL, "pt_BR.UTF-8"); // para suporte a acentuação em português

    // tipos de dados
    // int - inteiro
    // float - real
    // char - caractere

    // declaração de variaveis 01
    char pais[50];
    char estados[50];
    char cidade[50];
    float Populacao; // Alterado para float para usar com %f
    int Pontos_turisticos;
    float Area;
    float PIB;
    float Densidade_populacional;
    float PIB_per_capita;
    float Super_Poder;

    // declaração de variaveis 02
    char pais2[50];
    char estados2[50];
    char cidade2[50];
    float Populacao2; // Alterado para float
    int Pontos_turisticos2;
    float Area2;
    float PIB2;
    float Densidade_populacional2; // Corrigido o nome da variável
    float PIB_per_capita2;
    float Super_Poder2;

    // sintaxe de impressao
    printf("Vamos cadastrar 02 Paises. \n");
    printf("Cadastro do Pais 01: \n");

    // entrada de dados 01
    printf("Digite o nome do Pais: \n");
    fgets(pais, 50, stdin);
    pais[strcspn(pais, "\n")] = '\0'; // Remove o \n do final

    printf("Digite o nome do estado: \n");
    fgets(estados, 50, stdin);
    estados[strcspn(estados, "\n")] = '\0';

    printf("Digite o nome da cidade: \n");
    fgets(cidade, 50, stdin);
    cidade[strcspn(cidade, "\n")] = '\0';

    printf("Digite sua Area (em km²): \n");
    scanf("%f", &Area);

    printf("Digite seu PIB (em bilhoes): \n");
    scanf("%f", &PIB);

    printf("Digite sua Populacao: \n");
    scanf("%f", &Populacao);

    printf("Quantos pontos turisticos: \n");
    scanf("%d", &Pontos_turisticos);

    // Limpa o buffer do teclado para a próxima leitura de string
    getchar();

    // calculo da densidade populacional e PIB per capita
    if (Area > 0) {
        Densidade_populacional = Populacao / Area;
    } else {
        Densidade_populacional = 0;
    }
    
    if (Populacao > 0) {
        PIB_per_capita = PIB / Populacao;
    } else {
        PIB_per_capita = 0;
    }

    if (Pontos_turisticos > 0) {
        Super_Poder = (Area + PIB + Populacao + PIB_per_capita) / Pontos_turisticos;
    } else {
        Super_Poder = 0;
    }
    
    // fim da entrada de dados 01

    // sintaxe de impressao
    printf("Vamos cadastrar o segundo pais! \n");
    printf("Cadastro do Pais 02: \n");

    // inicio de cadastro 02
    printf("Digite o nome do Pais: \n");
    fgets(pais2, 50, stdin);
    pais2[strcspn(pais2, "\n")] = '\0';

    printf("Digite o nome do estado: \n");
    fgets(estados2, 50, stdin);
    estados2[strcspn(estados2, "\n")] = '\0';

    printf("Digite o nome da cidade: \n");
    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Digite sua Area (em km²): \n");
    scanf("%f", &Area2);

    printf("Digite seu PIB (em bilhoes): \n");
    scanf("%f", &PIB2);

    printf("Digite sua Populacao: \n");
    scanf("%f", &Populacao2);

    printf("Quantos pontos turisticos: \n");
    scanf("%d", &Pontos_turisticos2);

    // calculo da densidade populacional e PIB per capita
    if (Area2 > 0) {
        Densidade_populacional2 = Populacao2 / Area2;
    } else {
        Densidade_populacional2 = 0;
    }
    
    if (Populacao2 > 0) {
        PIB_per_capita2 = PIB2 / Populacao2;
    } else {
        PIB_per_capita2 = 0;
    }

    if (Pontos_turisticos2 > 0) {
        Super_Poder2 = (Area2 + PIB2 + Populacao2 + PIB_per_capita2) / Pontos_turisticos2;
    } else {
        Super_Poder2 = 0;
    }

    // fim da entrada de dados 02

    // confirmação de cadastros
    printf("\nTODOS OS PAISES CADASTRADOS COM SUCESSO! \n\n");

    // sintaxe de impressao 01
    printf("Pais 01 cadastrado com sucesso! \n");
    printf(" -Pais: %s \n", pais);
    printf(" -Estado: %s \n", estados);
    printf(" -Cidade: %s \n", cidade);
    printf(" -Populacao: %.0f \n", Populacao);
    printf(" -Area: %.2f km²\n", Area);
    printf(" -PIB: %.2f bilhoes\n", PIB);
    printf(" -Pontos turisticos: %d \n", Pontos_turisticos);
    printf(" -Densidade populacional é: %.2f\n", Densidade_populacional);
    printf(" -PIB per capita é: %.2f\n", PIB_per_capita);
    printf(" -Super Poder é: %.2f\n\n", Super_Poder);

    // sintaxe de impressao 02
    printf("Pais 02 cadastrado com sucesso! \n");
    printf(" -Pais: %s \n", pais2);
    printf(" -Estado: %s \n", estados2);
    printf(" -Cidade: %s \n", cidade2);
    printf(" -Populacao: %.0f \n", Populacao2);
    printf(" -Area: %.2f km²\n", Area2);
    printf(" -PIB: %.2f bilhoes\n", PIB2);
    printf(" -Pontos turisticos: %d \n", Pontos_turisticos2);
    printf(" -Densidade populacional é: %.2f\n", Densidade_populacional2);
    printf(" -PIB per capita é: %.2f\n", PIB_per_capita2);
    printf(" -Super Poder é: %.2f\n\n", Super_Poder2);

    // inicio do teste de poder
    if (Super_Poder >= Super_Poder2){
        printf("PARABENS PAIS 1 VENCEU.\n"); // condição verdadeira
    } else {
        printf("PARABENS PAIS 2 VENCEU.\n"); // condição falsa
    }
    // fim do teste de poder

    return 0;
}
