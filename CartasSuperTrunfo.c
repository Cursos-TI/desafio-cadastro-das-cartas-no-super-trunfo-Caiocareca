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
    float Área2, // Área da cidade em km2
    float PIB2; //Produto interno Bruto da cidade 
    int PontosTurísticos2; //Quantidade de turístas na cidade

    //Área para entrada de dados
    printf("Cadastro da carta 1\n");

    printf("Digite o Estado (PB): ");
    scanf("%s", Estado1);

    printf("Digite o Código (ex: A01): ");
    scanf("%s", Código1);

    printf("Digite o Nome da Cidade: ");
    scanf("%[^\n]", NomeCidade1);

printf("Digite a População: "); 
scanf("%d",&População1);

printf("Digite a Área (km2): ");
scanf("%f",%Área1); 

print("D9g9te o PIB (bilhões de R$): ");
scanf("%f", &PIB1):

printf("Digite a quantidade de pontos turísticos: ");
scanf("%d", &PontosTurísticos1)


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
