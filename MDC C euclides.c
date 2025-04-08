/******************************************************************************
Autor: Murilo Oliva Mantovani (834730)
Data de Criação: 02/09/24
Data de Alteração: 02/09/24
Objetivo: Máximo Divisor Comum(MDC) junto com as operações racionais.
*******************************************************************************/


#include <stdio.h>

// Definição de um novo tipo de dado para representar um número racional
typedef struct {
    int numerador;
    int denominador;
} tRacional;

/*
Sub-rotina: calcularMDC
Objetivo: Calcular o Máximo Divisor Comum (MDC) entre dois números inteiros.
Parâmetros:
- a: Primeiro número inteiro (entrada de dados)
- b: Segundo número inteiro (entrada de dados)
Valor de Retorno:
- O MDC dos dois números inteiros.
*/
int calcularMDC(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

/*
Sub-rotina: simplificarRacional
Objetivo: Simplificar um número racional r para sua forma mais básica.
Parâmetros:
- r: Número racional a ser simplificado (entrada/saída de dados)
Valor de Retorno:
- Nenhum
*/
void simplificarRacional(tRacional *r) {
    int divisor = calcularMDC(r->numerador, r->denominador);
    r->numerador /= divisor;
    r->denominador /= divisor;
}

/*
Sub-rotina: lerRacional
Objetivo: Ler um número racional do teclado e simplificá-lo.
Parâmetros:
- r: Número racional a ser lido (saída de dados)
Valor de Retorno:
- Nenhum
*/
void lerRacional(tRacional *r) {
    printf("Digite o numerador: ");
    scanf("%d", &r->numerador);
    printf("Digite o denominador: ");
    scanf("%d", &r->denominador);
    simplificarRacional(r);
}

/*
Sub-rotina: escreverRacional
Objetivo: Escrever um número racional na tela.
Parâmetros:
- r: Número racional a ser escrito (entrada de dados)
Valor de Retorno:
- Nenhum
*/
void escreverRacional(tRacional r) {
    printf("%d/%d\n", r.numerador, r.denominador);
}

/*
Sub-rotina: somarRacionais
Objetivo: Somar dois números racionais e retornar o resultado.
Parâmetros:
- r1: Primeiro número racional (entrada de dados)
- r2: Segundo número racional (entrada de dados)
Valor de Retorno:
- Resultado da soma dos números racionais
*/
tRacional somarRacionais(tRacional r1, tRacional r2) {
    tRacional resultado;
    resultado.numerador = r1.numerador * r2.denominador + r2.numerador * r1.denominador;
    resultado.denominador = r1.denominador * r2.denominador;
    simplificarRacional(&resultado);
    return resultado;
}

/*
Sub-rotina: subtrairRacionais
Objetivo: Subtrair dois números racionais e retornar o resultado.
Parâmetros:
- r1: Primeiro número racional (entrada de dados)
- r2: Segundo número racional (entrada de dados)
Valor de Retorno:
- Resultado da subtração dos números racionais
*/
tRacional subtrairRacionais(tRacional r1, tRacional r2) {
    tRacional resultado;
    resultado.numerador = r1.numerador * r2.denominador - r2.numerador * r1.denominador;
    resultado.denominador = r1.denominador * r2.denominador;
    simplificarRacional(&resultado);
    return resultado;
}

/*
Sub-rotina: multiplicarRacionais
Objetivo: Multiplicar dois números racionais e retornar o resultado.
Parâmetros:
- r1: Primeiro número racional (entrada de dados)
- r2: Segundo número racional (entrada de dados)
Valor de Retorno:
- Resultado da multiplicação dos números racionais
*/
tRacional multiplicarRacionais(tRacional r1, tRacional r2) {
    tRacional resultado;
    resultado.numerador = r1.numerador * r2.numerador;
    resultado.denominador = r1.denominador * r2.denominador;
    simplificarRacional(&resultado);
    return resultado;
}

/*
Sub-rotina: dividirRacionais
Objetivo: Dividir dois números racionais e retornar o resultado.
Parâmetros:
- r1: Primeiro número racional (entrada de dados)
- r2: Segundo número racional (entrada de dados)
Valor de Retorno:
- Resultado da divisão dos números racionais
*/
tRacional dividirRacionais(tRacional r1, tRacional r2) {
    tRacional resultado;
    resultado.numerador = r1.numerador * r2.denominador;
    resultado.denominador = r1.denominador * r2.numerador;
    simplificarRacional(&resultado);
    return resultado;
}

int main() {
    tRacional r1, r2, resultado;

    printf("Leitura do primeiro número racional:\n");
    lerRacional(&r1);
    printf("Leitura do segundo número racional:\n");
    lerRacional(&r2);

    printf("\nPrimeiro número racional: ");
    escreverRacional(r1);
    printf("Segundo número racional: ");
    escreverRacional(r2);

    resultado = somarRacionais(r1, r2);
    printf("\nSoma: ");
    escreverRacional(resultado);

    resultado = subtrairRacionais(r1, r2);
    printf("Subtração: ");
    escreverRacional(resultado);

    resultado = multiplicarRacionais(r1, r2);
    printf("Multiplicação: ");
    escreverRacional(resultado);

    resultado = dividirRacionais(r1, r2);
    printf("Divisão: ");
    escreverRacional(resultado);

    return 0;
}
