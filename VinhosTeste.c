/*
Autor:Murilo Oliva Mantovani
RA:834730
Data de criação:21/08/24
Data de modificação:21/08/24
Objetivo:Registrar os valores e tipos de vinho
*/

#include <stdio.h>
#include <string.h>

#define MAX_NOME 100

int main() {
    // Declarar as variáveis
    char nome[MAX_NOME], vinhoMaisCaroNome[MAX_NOME], vinhoMaisCaroTipo[MAX_NOME];
    float preco, vinhoMaisCaroPreco = 0.0;
    char tipo[MAX_NOME];

    while (1) { // Loop infinito, até que seja interrompido

        // Ler o nome do vinho
        printf("Digite o nome do vinho (ou FIM para encerrar): ");
        fgets(nome, MAX_NOME, stdin);
        nome[strcspn(nome, "\n")] = '\0'; // Remove o caractere de nova linha

        // Verificar se o nome é "FIM" para encerrar a entrada de dados
        if (strcmp(nome, "FIM") == 0 || strcmp(nome, "Fim") == 0 || strcmp(nome, "fim") == 0) {
            break;
        }

        // Ler o preço e o tipo do vinho
        printf("Digite o preco do vinho: ");
        scanf("%f", &preco);
        getchar(); // Limpar o caractere de nova linha restante no buffer

        printf("Digite o tipo do vinho:(T para vinho tinto, B para vinho branco e R para vinho rose) ");
        fgets(tipo, MAX_NOME, stdin);
        tipo[strcspn(tipo, "\n")] = '\0'; // Remove o caractere de nova linha

        // Atualizar o vinho mais caro se o preço atual for maior que o vinho mais caro conhecido
        if (preco > vinhoMaisCaroPreco) {
            strcpy(vinhoMaisCaroNome, nome);
            vinhoMaisCaroPreco = preco;
            strcpy(vinhoMaisCaroTipo, tipo);
        }

    }
    
    // Exibir os dados do vinho mais caro
    printf("Vinho mais caro:\n");
    printf("Nome: %s\n", vinhoMaisCaroNome);
    printf("Preço: R$ %.2f\n", vinhoMaisCaroPreco);
    printf("Tipo: %s\n", vinhoMaisCaroTipo);

    return 0;
}
