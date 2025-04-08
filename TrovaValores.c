/*
Autor:Murilo Oliva Mantovani RA:834730
Data de criação:17/07/24
Data de modificação:17/07/24
Objetivo:Trocar o valor de duas variáveis.
*/

#include <stdio.h>

int main(){
    
    //Declarar as variáveis    
    int A = 3;
    int B = 5;
    
    //Dizer o valor das variáveis Antes
    printf("Antes:\nA = %d e B = %d\n", A, B);
    
    //Alterar o valor das variáveis
    int temp = A;
    A = B;
    B= temp;
    
    //Dizer o valor das variasveis Depois
    printf("Depois:\nA = %d e B = %d", A, B);
}