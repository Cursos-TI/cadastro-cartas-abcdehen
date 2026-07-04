#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1, estado2;
  char codigo1[10], codigo2[10];
  char nome1[50], nome2[50];
  int populacao1, populacao2, numero1, numero2;
  float area1, area2, pib1, pib2, densidade_p1, densidade_p2, pib_per_capita1, pib_per_capita2;
  // Área para entrada de dados

  // Informações da carta 1
  printf("Digite uma letra de A a H para representar o Estado da carta 1:\n");
  scanf(" %c", &estado1);
  printf("Digite o código da carta 1(letra do Estado mais um número de 01 a 04):\n");
  scanf("%s", codigo1);
  printf("Digite o nome de uma cidade do Estado:\n");
  getchar();
  fgets(nome1, 50, stdin);
  nome1[strcspn(nome1, "\n")] = '\0';
  printf("Digite o número de habitantes da cidade:\n");
  scanf("%d", &populacao1);
  printf("Digite a área da cidade em km²:\n");
  scanf("%f", &area1);
  printf("Digite o produto interno bruto(PIB) da cidade em bilhões:\n");
  scanf("%f", &pib1);
  printf("Digite o número de pontos turísticos da cidade:\n");
  scanf("%d", &numero1);

  // Informações da carta 2
  printf("Digite uma letra de A a H para representar o Estado da carta 2:\n");
  scanf(" %c", &estado2);
  printf("Digite o código da carta 2(letra do Estado mais um número de 01 a 04):\n");
  scanf("%s", codigo2);
  printf("Digite o nome de uma cidade do Estado:\n");
  getchar();
  fgets(nome2, 50, stdin);
  nome2[strcspn(nome2, "\n")] = '\0';
  printf("Digite o número de habitantes da cidade:\n");
  scanf("%d", &populacao2);
  printf("Digite a área da cidade em km²:\n");
  scanf("%f", &area2);
  printf("Digite o produto interno bruto(PIB) da cidade em bilhões:\n");
  scanf("%f", &pib2);
  printf("Digite o número de pontos turísticos da cidade:\n");
  scanf("%d", &numero2);

  // Área para calcular a densidade populacional e PIB per capita

  // Calculo da carta 1
  densidade_p1 = (populacao1/area1);
  pib_per_capita1 = (pib1*1000000000/populacao1);
  float inversoDP1 = (1/densidade_p1);
  float superpoder1 = (populacao1 + area1 + pib1 + numero1 + inversoDP1 + pib_per_capita1);

  // Calculo da carta 2
  densidade_p2 = (populacao2/area2);
  pib_per_capita2 = (pib2*1000000000/populacao2);
  float inversoDP2 = (1/densidade_p2);
  float superpoder2 = (populacao2 + area2 + pib2 + numero2 + inversoDP2 + pib_per_capita2);

  // Área para exibição dos dados da cidade

  // Exibição da carta 1
  printf("Carta 1\n");
  printf("Estado: %c \n", estado1);
  printf("Código: %s \n", codigo1);
  printf("Nome da cidade: %s \n", nome1);
  printf("População: %d \n", populacao1);
  printf("Área: %.2f Km² \n", area1);
  printf("PIB: %.2f bilhões de reais \n", pib1);
  printf("Número de pontos turísticos: %d \n", numero1);
  printf("Densidade populacional: %.2f hab/km² \n", densidade_p1);
  printf("PIB per capita: %.2f reais \n", pib_per_capita1);
  printf("Super Poder: %.2f \n", superpoder1);

  // Exibição da carta 2
  printf("Carta 2\n");
  printf("Estado: %c \n", estado2);
  printf("Código: %s \n", codigo2);
  printf("Nome da cidade: %s \n", nome2);
  printf("População: %d \n", populacao2);
  printf("Área: %.2f Km² \n", area2);
  printf("PIB: %.2f bilhões de reais \n", pib2);
  printf("Número de pontos turísticos: %d \n", numero2);
  printf("Densidade populacional: %.2f hab/km² \n", densidade_p2);
  printf("PIB per capita: %.2f reais \n", pib_per_capita2);
  printf("Super Poder: %.2f \n", superpoder2);

  // Exibição da comparação das cartas
  printf("Comparação das cartas(1 significa a carta 1 venceu e 0 a carta 2 venceu): \n");
  printf("População: %d \n", populacao1 > populacao2);
  printf("Área: %d \n", area1 > area2);
  printf("PIB: %d \n", pib1 > pib2);
  printf("Pontos turísticos: %d \n", numero1 > numero2);
  printf("Densidade populacional: %d \n", densidade_p1 < densidade_p2);
  printf("PIB per capita: %d \n", pib_per_capita1 > pib_per_capita2);
  printf("Super Poder: %d \n", superpoder1 > superpoder2);

return 0;
} 
