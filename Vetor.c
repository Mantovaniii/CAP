/*
Autor:Murilo Oliva Mantovani
RA:834730
Data de criação:19/08/24
Data de modififcação:19/08/24
Objetivo:Seleção em Vetor 1
*/

#include <stdio.h>

int main (){
    //Declarar as variaveis
	double a[100];
	int i;
	
	//Ler todos os valores e armazenar no vetor
	for (i=0; i<100; i++){
		scanf("%lf", &a[i]);
	}
	
	//Dizer todos os valores com seu respectivo indice,desde que eles sejam menores ou igual a 10
	for (i=0; i <100; i++){
		if (a[i] <= 10){
			printf("A[%d] = %.1lf\n", i, a[i]);
		}
	}
	//Fim do codigo
	return 0;
}
