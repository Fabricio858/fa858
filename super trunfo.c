#include <stdio.h>

int main(){
  char carta [50];
  char estado [50]; 
  char codigo [50];
  char cidade [50];
  int populacao;
  int pontos;
  float area;
  float pib;
  //printf para o usuario saber a informação que queremos e scanf para ler os dados do usuario
  printf("Digite a carta: \n");
  scanf("%s", &carta);

  printf("Digite o estado: \n");
  scanf("%s", &estado);

  printf("Digite o codigo: \n");
  scanf("%s", &codigo);

  printf("Digite a cidade: \n");
  scanf("%s", &cidade);

printf("Digite a população: \n");
scanf("%d", &populacao);

printf("Digite a Àrea: \n");
scanf("%f", &area);

printf("Digite o Pib da cidade: \n");
scanf("%f", &pib);

printf("Digite o número de pontos turisticos: \n");
scanf("%d",&pontos);

//coloquei todas as informações para serem exibidas uma abaixo da outra
  printf("Carta: %s \n",  carta);
  printf("Estado: %s \n", estado);
  printf("Codigo: %s \n", codigo);
  printf("Nome da Cidade: %s \n", cidade);
  printf("População: %d \n", populacao);
  printf("Àrea: %f km² \n",area);
  printf("PIB: %.3f Bilhões de Reais \n",pib);
  printf("Número de Pontos Turisticos: %d \n", pontos);
  
  
  };
  












  