#include <stdio.h>

int main() {


  char estado;
  int codigo_da_carta;
  char cidade[50];
  int populacao;
  float area;
  float pib;
  int pontos_turisticos;
  float densidade_populacional;
  float pib_per_capita;


  printf("digite o estado:\n");
  scanf(" %c", estado);


  printf("digite o codigo da carta:\n");
  scanf("%d", &codigo_da_carta);


  printf("digite a cidade:\n");
  scanf(" %s", cidade);


  printf("digite a população:\n");
  scanf("%d", &populacao);


  printf("digite a area:\n");
  scanf("%f", &area);


  printf("digite o pib:\n");
  scanf("%f", &pib);


  printf("digite o numero de ponto turístico:\n");
  scanf("%d", &pontos_turisticos);


  printf("digite a densidade populacional:\n");
  scanf("%f", &densidade_populacional);

  printf("digite o pib per capita:\n");
  scanf("%f", &pib_per_capita);


    return 0;
}
