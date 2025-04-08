/******************************************************************************

Autor:Murilo Oliva Mantovani (834730)
Data de criação:04/09/24
Data de modificação:04/09/24
Objetivo:TAD conjunto

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 1000

// Estrutura de dados para armazenar um conjunto de inteiros
typedef struct {
    int elementos[MAX];  // Vetor que armazena os elementos do conjunto
    int nElementos;      // Número de elementos atualmente no conjunto
} tConjunto;


void iniciarConjunto(tConjunto *c);
void adicionarElemento(tConjunto *c);
void adicionarMaisElementos(tConjunto *c);
void removerElementos(tConjunto *c);
void ordenarElementos(tConjunto *c);
void mostrarElementos(tConjunto *c);
void conjuntoVazio(tConjunto *c);
void numElementos(tConjunto *c);
void valorConjunto(tConjunto *c);

int main() {
    tConjunto c1;
    iniciarConjunto(&c1);
    adicionarMaisElementos(&c1);
    removerElementos(&c1);
    ordenarElementos(&c1);
    mostrarElementos(&c1);
    conjuntoVazio(&c1);
    numElementos(&c1);
    valorConjunto(&c1);

    return 0;
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
Sub-rotina: removerElementos
Objetivo: Remover um elemento específico do conjunto, com base na sua posição, caso o usuário deseje.
Parâmetros:
- c: Ponteiro para a estrutura tConjunto (entrada/saída de dados)
Valor de Retorno:
- Nenhum
*/

void removerElementos(tConjunto *c) {
    char resposta[3];
    printf("Deseja remover algum elemento? (S/N)\n");
    scanf("%s", resposta);
    if(strcasecmp(resposta,"S") == 0) {  // Verifica se o usuário deseja remover um elemento
        printf("Qual elemento? (Identifique-o pela localização dele):\n");
        int loc;
        scanf("%d", &loc);
        if(loc > 0 && loc <= c->nElementos) {  // Verifica se a posição é válida
            for(int i = loc-1; i < c->nElementos-1; i++) {
                c->elementos[i] = c->elementos[i+1];  // Move os elementos para "preencher" a posição removida
            }
            c->nElementos--;  // Decrementa o número de elementos no conjunto
        } else {
            printf("Localização inválida!\n");  // Exibe mensagem de erro se a posição for inválida
        }
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

/*
Sub-rotina: ordenarElementos
Objetivo: Ordenar os elementos do conjunto em ordem crescente.
Parâmetros:
- c: Ponteiro para a estrutura tConjunto (entrada/saída de dados)
Valor de Retorno:
- Nenhum
*/

void ordenarElementos(tConjunto *c) {
    int temp;
    for (int i = 0; i < c->nElementos; i++) {
        for (int j = i+1; j < c->nElementos; j++) {
            if(c->elementos[i] > c->elementos[j]) {  // Verifica se os elementos estão fora de ordem
                temp = c->elementos[i];
                c->elementos[i] = c->elementos[j];
                c->elementos[j] = temp;  // Troca os elementos de lugar
            }
        }
    }
}

/*
Sub-rotina: conjuntoVazio
Objetivo: Verificar se o conjunto está vazio e exibir uma mensagem correspondente.
Parâmetros:
- c: Ponteiro para a estrutura tConjunto (entrada de dados)
Valor de Retorno:
- Nenhum
*/

void conjuntoVazio(tConjunto *c) {
    if(c->nElementos == 0) {  // Verifica se o conjunto está vazio
        printf("Conjunto está vazio!\n");
    } else {
        printf("Conjunto não está vazio!\n");
    }
}

/*
Sub-rotina: numElementos
Objetivo: Exibir o número de elementos atualmente presentes no conjunto.
Parâmetros:
- c: Ponteiro para a estrutura tConjunto (entrada de dados)
Valor de Retorno:
- Nenhum
*/

void numElementos(tConjunto *c) {
    printf("Número de elementos do conjunto: %d\n", c->nElementos);  // Exibe o número de elementos no conjunto
}

/*
Sub-rotina: valorConjunto
Objetivo: Verificar se um determinado valor está presente no conjunto e exibir uma mensagem correspondente.
Parâmetros:
- c: Ponteiro para a estrutura tConjunto (entrada de dados)
Valor de Retorno:
- Nenhum
*/

void valorConjunto(tConjunto *c) {
    int valor;
    int encontrado = 0;
    printf("Qual valor você quer ver se tem no conjunto?\n");
    scanf("%d", &valor);
    for(int i = 0; i < c->nElementos; i++) {
        if(c->elementos[i] == valor) {  // Verifica se o valor está presente no conjunto
            encontrado = 1;
            break;
        }
    }
    if(encontrado) {
        printf("Esse valor está no conjunto!\n");
    } else {
        printf("Esse valor não está no conjunto!\n");
    }
}
