/*
Aluno:Murilo Oliva Mantovani 834730
Data de criação:03/07/2024
Data de alteração:03/07/2024
Objetivo:Calcular o IMC
*/

//Biblioteca
#include <stdio.h>
#include <math.h>

//Inicio do programa sobre "Como calcular o IMC"
int main(){

    //Indicar as variáveis que vamos usar
    double peso,alt,imc;
    
    //Perguntar o valor do peso
    printf("Digite o valor do seu peso em kg: \n");

    //Dar o valor da variavel peso
    scanf("%lf", &peso);
    
    //Perguntar o valor da altura
    printf("Digite o valor da sua altura em metros: \n");
    
    //Dar o valor da variavel altura
    scanf("%lf", &alt);

    //Calcular o IMC
    imc=peso/(alt*alt);

    //Dizer o valor do IMC    
    printf("O seu IMC e: %.2lf", imc);
    
//Fim do programa
}
