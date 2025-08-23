#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

// CARTA 1
char codigocidade1[40];
char nome1[40];
int populacao1;
float area1;
float pib1;
int pontosturisticos1;


// CARTA 2
char codigocidade2[40];
char nome2[40];
int populacao2;
float area2;
float pib2;
int pontosturisticos2;

printf("Crie 1 codigo para cidade \n");
scanf("%s", codigocidade1);

printf("Crie 1 nome para cidade \n");
scanf("%s", nome1);

printf("Diga a população dessa cidade  \n");
scanf("%d", &populacao1);

printf("Diga a area dessa cidade \n");
scanf("%f", &area1);

printf("Diga o pib dessa cidade \n");
scanf("%f", &pib1);

printf("Diga a quantidade de pontos turisticos dessa cidade \n");
scanf("%d", &pontosturisticos1);

printf(\n-----------"Dados da cidade1"----------------);   
printf("Codigo: %s\n", codigocidade1);
    printf("Nome: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1
}
