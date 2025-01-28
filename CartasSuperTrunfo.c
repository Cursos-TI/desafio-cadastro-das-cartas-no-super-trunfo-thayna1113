#include <stdio.h>

int main() {

  char estado[50];
  char cidade[50];
  float populacao;
  float area;
  float pib;
  int pontos; //turisticos

  printf("digite o estado:\n");
  scanf("%s", estado);


  printf("digite a cidade:\n");
  scanf("%s", cidade);


  printf("digite a população:\n");
  scanf("%f", &populacao);


  printf("digite a area:\n");
  scanf("%f", &area);


  printf("digite o pib:\n");
  scanf("%f", &pib);


  printf("digite o numero de ponto turístico:\n");
  scanf("%d", &pontos);

  printf("estado: %s - cidade: %s\n", estado, cidade);
  printf("populacao: %f - area: %f - pib: %f - pontos %d\n", populacao, area, pib, pontos);

    return 0;
}
