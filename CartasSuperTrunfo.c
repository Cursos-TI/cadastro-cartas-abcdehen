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
  float area1, area2, pib1, pib2;
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
  printf("Digite o produto interno bruto(PIB) da cidade:\n");
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
  printf("Digite o produto interno bruto(PIB) da cidade:\n");
  scanf("%f", &pib2);
  printf("Digite o número de pontos turísticos da cidade:\n");
  scanf("%d", &numero2);
  // Área para exibição dos dados da cidade

  // Exibição da carta 1
  printf("Carta 1\n");
  printf("Estado: %c \n", estado1);
  printf("Código: %s \n", codigo1);
  printf("Nome da cidade: %s \n", nome1);
  printf("População: %d \n", populacao1);
  printf("Área: %.2f Km² \n", area1);
  printf("PIB: %.2f de reais \n", pib1);
  printf("Número de pontos turísticos: %d \n", numero1);

  // Exibição da carta 2
  printf("Carta 2\n");
  printf("Estado: %c \n", estado2);
  printf("Código: %s \n", codigo2);
  printf("Nome da cidade: %s \n", nome2);
  printf("População: %d \n", populacao2);
  printf("Área: %.2f Km² \n", area2);
  printf("PIB: %.2f de reais \n", pib2);
  printf("Número de pontos turísticos: %d \n", numero2);

return 0;
} 
