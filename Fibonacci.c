/*
Autor:Murilo Oliva Mantovani
RA:834730
Data de criação:19/08/24
Data de modififcação:19/08/24
Objetivo:Fibonacci em Vetor
*/

#include <stdio.h>

//Inicio do codigo
int main (){

  //Declarar as variaveis    
  int qtd, N, i, j;
  long long int valorFib = 0, temp1 = 0, temp2 = 1;

  //Ler a quantidade de valores que serão utilizados
  scanf("%d", &qtd);

  //Ler os valores
  for (i=0;i<qtd;i++){
    scanf("%d", &N);
    if (N == 0){
      //Caso o valor seja zero
      printf("Fib(%d) = 0\n", N);
    }
    else //Senão...
    {
      
      //Calcula o valor N-ésimo da série de fibonacci
      for (j=0;j<N;j++){
        temp1 = temp2;
        temp2 = valorFib;
        valorFib = temp1 + temp2;
      }
      
      //Digita o termo N na sequencia de fibonacci
      printf("Fib(%d) = %lld\n", N, valorFib);
      
      //Reinicia as variaveis para o calculo do proximo valor
      temp1 = 0;
      temp2 = 1;
      valorFib = 0;
    }
  }
}