/*
Autor:Murilo Oliva Mantovani
RA:834730
Data de criação:19/08/24
Data de modififcação:19/08/24
Objetivo:Linha na matriz
*/

#include <stdio.h>

int main (){

  //Declarar as variaveis    
  float matriz[12][12], soma = 0, media = 0, temp;
  int i, j, linha;
  char op;

  //Ler a linha e a operação que sera feita na linha desejada
  scanf("%d %c", &linha, &op);

  //Ler os elementos da matriz
  for (i = 0; i < 12; i++){
    for (j = 0; j < 12; j++){
      scanf("%f", &temp);
      matriz[i][j] = temp;
    }
  }

  //Codigo para realizar a soma
  if (op == 'S'){
    i = linha;
    while (i == linha){
      for (j = 0; j < 12; j++){
        soma += matriz[i][j];
      }
      i++;
    }

    //Digita o resultado da soma
    printf("%.1f\n", soma);

  }
  else
  {
    //Codigo para realizar a media
    if (op == 'M'){
      i = linha;
      while (i == linha){
        for (j = 0; j < 12; j++){
          media += matriz[i][j];
        }
        i++;
      }

      //Digita o resultado da media
      printf("%.1f\n", media/12);

    }
  }
  
  //Fim do codigo
  return 0;
}