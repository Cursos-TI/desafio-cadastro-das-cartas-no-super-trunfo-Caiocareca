#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Caio

int main() {

    //Carta1
    char Estado1 [60]; //Escolha uma letra de A a H para representar um dos oitos Etados brasileiros
    char Código1 [20]; //Use a letra escolhida seguida de um número de 01 a 04  (ex: A01, B01...)
    char NomeCidade1[60]; // Nome da cidade
    int População1; //População da cidade
    float Área1; //Área da cidade em km2
    float PIB1; //Produto Interno Bruto da cidade
    int PontosTurísticos1; //Quantidade de turístas na cidade

    //Carta 2
    char Estado2 [60]; //Escolha uma letra de A a H
    char Código2 [20]; //Use a letra escolhida seguida de um número de 01 a 04
    char NomeCidade2 [60]; //Nome da cidade
    int População2; //População da cidade
    float Área2; // Área da cidade em km2
    float PIB2; //Produto interno Bruto da cidade 
    int PontosTurísticos2; //Quantidade de turístas na cidade

    //Área para entrada de dados
    printf("Cadastro da carta 1\n");

    printf("Digite o Estado (PB): ");
    scanf("%s", Estado1);

    printf("Digite o Código (ex: A01): ");
    scanf("%s", Código1);

    printf("Digite o Nome da Cidade: ");
    scanf("%[\n]", NomeCidade1);

printf("Digite a População: "); 
scanf("%d[\n]",&População1);

printf("Digite a Área (km2): ");
scanf("%f\n",&Área1); 

printf("Digite o PIB (bilhões de R$): ");
scanf("%f\n", &PIB1);

printf("Digite a quantidade de pontos turísticos: ");
scanf("%d\n", &PontosTurísticos1);


printf("Cadastro da carta 2\n");

printf("Digite o Estado (SP): ");
scanf("%s\n",Estado2);

printf("Digite o Código (ex:A01): ");
scanf("%s\n", Código2);

printf("Digite o Nome da Cidade: ");
scanf("%[^\n]", NomeCidade2); 

printf("Digite a População: "); 
scanf("%d\n",&População2); 

printf("Digite a Área (km2): ");
scanf("%f\n",&Área2);

printf("Digite o PIB: ");
scanf("%f\n",&PIB2); 

printf("Digite a quantidade de Pontos Turísticos: "); 
scanf("%d\n",&PontosTurísticos2); 


//Área para exibição dos dados das cartas

printf("\n--- Carta 1 ---\n");
printf("Estado: %s\n",Estado1);
printf("Código: %s\n", NomeCidade1);
printf("População: %d\n",População1);
printf("Área: %.2f km2\n",Área1);
printf("PIB: %.2f bilhões de R$\n", PIB1);
printf("PontosTurísticos: %d\n",PontosTurísticos1); 
printf("----------");


printf("\n--- Carta 2 ---\n");
printf("REstado: %s\n",Estado2);
printf("Código: %s\n", Código2);
printf("Nome da Cidade: %s\n", NomeCidade2); 
printf("População: %d\n",População2);
printf("Área: %.2f km2\n",Área2);
printf("PIB: %.2f bilhões de R$\n",PIB2);
printf("PontosTurísticos: %d\n",PontosTurísticos2);
printf("----------");


return 0;
}
