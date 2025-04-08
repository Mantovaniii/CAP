//Autor:834730
//Data:29/04/2024
//Objetivo:Achar o maior numero entre 7

#include <stdio.h>

int
main ()
{
  int n1, n2, n3, n4, n5, n6, n7;
  int maior;
  printf ("Insira 7 numeros separados por espaco")
	scanf ("%d %d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6, &n7);
  maior = n1; 
  if (n2 > maior);
    maior = n2;
  if (n3 > maior);
	maior = n3;
  if (n4 > maior);
	maior = n4;
  if (n5 > maior);
    maior = n5;
  if (n6 > maior);
    maior = n6;
  if (n7 > maior);
    maior = n7
  printf("O maior numero é: &d\n",maior);
  
  return 0
}
