/******************************************************************************

Autor:Murilo Oliva Mantovani (834730)
Data de criação:04/09/24
Data de modificação:04/09/24
Objetivo:AP5 TAB conjunto

*******************************************************************************/

//Declara as bibliotecas que vai usar
#include <stdio.h>
#include <ctype.h>
#define MAX 1000

//Cria uma estrutura que cria um conjunto
typedef struct{
    int nElementos;
    int elementos[MAX];
}tConjunto;

//Coloca todas as funções acima da função main para que o codigo funcione corretamente
void iniciarConjunto(tConjunto *c);
void adicionarElemento(tConjunto *c);
void adicionarMaisElementos(tConjunto *c);
void mostrarElementos(tConjunto *c);

int main(){
    //Inicializa o conjunto
    tConjunto c1;
    iniciarConjunto(&c1);
    //Recebe os elementos do conjunto
    adicionarMaisElementos(&c1);
    //Mostra todos os elementos do conjunto
    mostrarElementos(&c1);
}

// Implementação das sub-rotinas

/*
Sub-rotina: iniciarConjunto
Objetivo: Inicializar o conjunto, definindo o número de elementos como zero.
Parâmetros:
- c: Ponteiro para a estrutura tConjunto (entrada/saída de dados)
Valor de Retorno:
- Nenhum
*/

void iniciarConjunto(tConjunto *c) {
    c->nElementos = 0;  // Inicializa o número de elementos no conjunto como zero
}

/*
Sub-rotina: adicionarElemento
Objetivo: Adicionar um único elemento ao conjunto, se ainda houver espaço.
Parâmetros:
- c: Ponteiro para a estrutura tConjunto (entrada/saída de dados)
Valor de Retorno:
- Nenhum
*/

void adicionarElemento(tConjunto *c) {
    if(c->nElementos < MAX) {  // Verifica se ainda há espaço no conjunto
        printf("Digite o elemento que deseja inserir:\n");
        scanf("%d", &c->elementos[c->nElementos]);  // Lê o elemento e o adiciona ao conjunto
        c->nElementos++;  // Incrementa o número de elementos no conjunto
    } else {
        printf("Conjunto está cheio!\n");  // Exibe mensagem de erro se o conjunto estiver cheio
    }
}

/*
Sub-rotina: removerElementos
Objetivo: Remover um elemento específico do conjunto, com base na sua posição, caso o usuário deseje.
Parâmetros:
- c: Ponteiro para a estrutura tConjunto (entrada/saída de dados)
Valor de Retorno:
- Nenhum
*/

void adicionarMaisElementos(tConjunto *c) {
    char continuar = 'S';
    while (continuar == 'S' && c->nElementos < MAX) {  // Continua adicionando elementos enquanto o usuário desejar e houver espaço
        adicionarElemento(c);
        printf("Deseja inserir outro elemento? (S/N): ");
        scanf(" %c", &continuar);
        continuar = toupper(continuar);  // Converte a resposta do usuário para maiúscula
    }
}

/*
Sub-rotina: mostrarElementos
Objetivo: Exibir os elementos atualmente presentes no conjunto.
Parâmetros:
- c: Ponteiro para a estrutura tConjunto (entrada de dados)
Valor de Retorno:
- Nenhum
*/

void mostrarElementos(tConjunto *c) {
    printf("Elementos do conjunto:\n");
    for(int i = 0; i < c->nElementos; i++) {  // Itera sobre o conjunto e exibe os elementos
        printf("%d ", c->elementos[i]);
    }
    printf("\n");
}

