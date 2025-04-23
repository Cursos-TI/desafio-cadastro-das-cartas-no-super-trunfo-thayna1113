#include <stdio.h>

int main() {


  char estado1, estado2;
  char codigo1[5], codigo2[5];
  char cidade1[50], cidade2[50];
  int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pontosturisticos1, pontosturisticos2;
  float pib_per_capital1, pib_per_capital2;
  float densidade_populacional1, densidade_populacional2;


  printf("cartas super trunfo\n");


  //declaraçao de variaveis carta 2


  printf("digite o codigo da carta1:\n");
  scanf(" %s", codigo1);
  printf("digite o estado:\n");
  scanf(" %c", &estado1);
  printf("digite a cidade:\n");
  scanf(" %s", cidade1);
  printf("digite a populacao:\n");
  scanf("%d", &populacao1);
  printf("digite a area:\n");
  scanf("%f", &area1);
  printf("digite o pib:\n");
  scanf("%f", &pib1);
  printf("digite o numero de pontos turisticos:\n");
  scanf("%d", &pontosturisticos1);


  densidade_populacional1 = populacao1 / area1;
  pib_per_capital1 = pib1 / populacao1;


  //declaraçao de variaveis carta 2


  printf("segunda carta\n");

  printf("digite o codigo da carta2:\n");
  scanf(" %s", codigo2);
  printf("digite o estado:\n");
  scanf(" %c", &estado2);
  printf("digite a cidade:\n");
  scanf(" %s", cidade2);
  printf("digite a populacao:\n");
  scanf("%d", &populacao2);
  printf("digite a area:\n");
  scanf("%f", &area2);
  printf("digite o pib:\n");
  scanf("%f", &pib2);
  printf("digite o numero de pontos turisticos:\n");
  scanf("%d", &pontosturisticos2);

  densidade_populacional2 = populacao2 / area2;
  pib_per_capital2 = pib2 / populacao2;



  printf("o codigo da primeira carta é: %s \n", codigo1);
  printf("o estado é:%c \n", estado1);
  printf("a cidade é:%s  \n", cidade1);
  printf("a populacao é:%d \n", populacao1);
  printf("a area é:%f  \n", area1);
  printf("o pib é:%f \n", pib1);
  printf("os pontos turistico são:%d \n", pontosturisticos1);
  printf("a densidade populacional é:%2f \n", densidade_populacional1);
  printf("o pib per capital é:%2f \n", pib_per_capital1);


  printf("o codigo da segunda carta é: %s \n", codigo2);
  printf("o estado é:%c \n", estado2);
  printf("a cidade é:%s  \n", cidade2);
  printf("a populacao é:%d \n", populacao2);
  printf("a area é:%f  \n", area2);
  printf("o pib é:%f \n", pib2);
  printf("os pontos turistico são:%d \n", pontosturisticos2);
  printf("a densidade populacional é:2%f \n", densidade_populacional2);
  printf("o pib per capital é:%2f \n", pib_per_capital2);


    return 0;
}
