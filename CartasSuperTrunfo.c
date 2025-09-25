#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Caio

int main (){

    //Carta1
    char Estado1 [60]; //Escolha uma letra de A a H para representar um dos oitos Etados brasileiros
    char Codigo1 [20]; //Use a letra escolhida seguida de um número de 01 a 04  (ex: A01, B01...)
    char NomeCidade1[60]; // Nome da cidade
    float Populaçao1; //População da cidade
    float Area1; //Área da cidade em km2
    float PIB1; //Produto Interno Bruto da cidade
    int PontosTuristicos1; //Quantidade de turístas na cidade
    float Densipop; // Desensidade populacional
    float PIP; //Pib percapita

    //Carta 2
    char Estado2 [60]; //Escolha uma letra de A a H
    char Codigo2 [20]; //Use a letra escolhida seguida de um número de 01 a 04
    char NomeCidade2 [60]; //Nome da cidade
    float Populaçao2; //População da cidade
    float Area2; // Área da cidade em km2
    float PIB2; //Produto interno Bruto da cidade 
    int PontosTuristicos2; //Quantidade de turístas na cidade
    float Densipop2; //Densidade populacional
    float PIP2; //Pib percapita

    //Área para entrada de dados
    printf("Cadastro da carta 1\n");

    printf("Digite o Estado: ");
    scanf("%s", Estado1);

    printf("Digite o Codigo (ex: A01): ");
    scanf("%s", Codigo1);

    printf("Digite o Nome da Cidade: \n"); 
    scanf("%s", NomeCidade1);

printf("Digite a População: \n"); 
scanf("%f", &Populaçao1);

printf("Digite a Área (km2): \n");
scanf("%f", &Area1); 

printf("Digite o PIB (bilhões de R$): \n");
scanf("%f", &PIB1);

printf("Digite a quantidade de pontos turísticos: \n");
scanf("%d", &PontosTuristicos1);

Densipop = Populaçao1 / Area1;
PIP = (PIB1 * 1000000000) / Populaçao1;

printf("Cadastro da carta 2\n");
printf("Digite o Estado: \n");
scanf("%s", Estado2);

printf("Digite o Código (ex:A01): \n");
scanf("%s", Codigo2);

printf("Digite o Nome da Cidade: \n");
scanf("%s", NomeCidade2); 

printf("Digite a População: \n"); 
scanf("%f", &Populaçao2); 

printf("Digite a Área (km2): \n");
scanf("%f", &Area2);

printf("Digite o PIB: \n");
scanf("%f", &PIB2); 

printf("Digite a quantidade de Pontos Turísticos: \n"); 
scanf("%d", &PontosTuristicos2); 

Densipop2 = Populaçao2 / Area2;
PIP2 = (PIB2 * 1000000000) / Populaçao2; 

//Área para exibição dos dados das cartas

printf("\n--- Carta 1 ---\n");
printf("Estado: %s\n", Estado1);
printf("Código: %s\n", NomeCidade1);
printf("População: %.2f\n", Populaçao1);
printf("Área: %.2f km2\n",Area1);
printf("PIB: %.2f bilhões de R$\n", PIB1);
printf("PontosTurísticos: %d\n", PontosTuristicos1); 
printf("DensidadePopulacional: %.2f\n", Densipop);
printf("PIB per capita: %.2f\n", PIP);
printf("----------");


printf("\n--- Carta 2 ---\n");
printf("Estado: %s\n", Estado2);
printf("Código: %s\n", Codigo2);
printf("Nome da Cidade: %s\n", NomeCidade2); 
printf("População: %.2f\n", Populaçao2);
printf("Área: %.2f km2\n", Area2);
printf("PIB: %.2f bilhões de R$\n", PIB2);
printf("PontosTurísticos: %d\n", PontosTuristicos2);
printf("Densidade Populacional: %.2f\n", Densipop2);
printf("PIP per capita: %.2f\n", PIP2); 
printf("----------");

    return 0; 
}