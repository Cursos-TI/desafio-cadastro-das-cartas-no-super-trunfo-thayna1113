#include <stdio.h>

int main() {


  char estado[4];
  char cidade[50];
  double populacao;
  double area;
  double pib;
  int pontos; //turisticos
  double divisao; 


  printf("digite o estado:\n");
  scanf(" %3s", estado);


  printf("digite a cidade:\n");
  scanf(" %s", cidade);


  printf("digite a população:\n");
  scanf(" %lf", &populacao);


  printf("digite a area:\n");
  scanf(" %lf", &area);


  printf("digite o pib:\n");
  scanf(" %lf", &pib);


  printf("digite o numero de ponto turístico:\n");
  scanf(" %d", &pontos);

  //operaçao dividir
  divisao = (pib / populacao);
  
  printf("O calculo é: %.2f \n", divisao);
  printf("estado: %s - cidade: %s\n", estado, cidade);
  printf("populacao: %.2f - area: %.2f - pib: %.2f - pontos %d \n", populacao, area, pib, pontos);

    return 0;
}
