/*********************************************************
Autor: Murilo Oliva Mantovani
RA: 834730
Data de criação: 26/08/24
Data de modificação: 26/08/24
Objetivo: Ler e dizer os dados de cada estudante da sala.
*********************************************************/

//Bibliotecas
#include <stdio.h>
#include <string.h>

//Constantes
#define TAMANHO_MAX_NOME 200

//Estrutura que armazena os dados dos alunos
typedef struct
{
    char nome[TAMANHO_MAX_NOME];
    int RA;
    int IRA;
    char sexo;
} tAluno;

//Função para calcular o IRA médio da turma
double iraMedio(tAluno alunos[], int n);

//Função que imprime os dados de um aluno
void printAluno(tAluno aluno);

//Função que verifica quais alunos possuem IRA maior que a média
void maiorQmedia(tAluno alunos[], int n, double mediaIra);

//Código para ler e exibir os dados dos alunos
int main()
{
    //Variável n = quantidade de alunos
    int n;
    
    //Ler a quantidade de alunos
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &n);
    
    //Vetor que irá armazenar os dados dos alunos usando a função typedef struct
    tAluno a[n];
    
    //Comando que pergunta os dados dos alunos
    for(int i = 0; i < n; i++)
    {
        printf("Nome = ");
        scanf(" %[^\n]s", a[i].nome); // Para ler o nome com espaços
        printf("RA = ");
        scanf("%d", &a[i].RA);
        printf("IRA = ");
        scanf("%d", &a[i].IRA);
        printf("Sexo = ");
        scanf(" %c", &a[i].sexo); 
        printf("\n");
    }
    
    //Pula uma linha para digitar os dados dos alunos armazenados
    printf("\n");
    
    //Comando que executa a função que digita todos os dados de todos os alunos
    for(int i = 0; i < n; i++)
    {
        printAluno(a[i]);
    }
    
    // Chama a função para calcular o IRA médio
    double mediaIra = iraMedio(a, n);
    
    // Chama a função para verificar alunos com IRA acima da média
    maiorQmedia(a, n, mediaIra);
}

/*
Sub-rotina: printAluno
Objetivo: Escreve os dados dos alunos
Parâmetros:
- Parâmetro:tAluno aluno, fornece os dados do aluno para serem escritos
*/
void printAluno(tAluno aluno)
{
    printf("Nome = %s\n", aluno.nome);
    printf("RA = %d\n", aluno.RA);
    printf("IRA = %d\n", aluno.IRA);
    printf("Sexo = %c\n", aluno.sexo);
    printf("\n");
}

/*
Sub-rotina: iraMedio
Objetivo: calcular o ira medio da turma
Parâmetros:
- Parâmetro1: tAluno alunos[], da os dados dos alunos
- Parâmetro2: int n, fornece a quantidade de alunos da turma
*/
double iraMedio(tAluno alunos[], int n)
{
    double somaIra = 0, mediaIra;
    
    for(int i = 0; i < n; i++)
    {
        somaIra += alunos[i].IRA;
    }
    
    mediaIra = somaIra / n;
    
    printf("IRA médio: %.2lf\n", mediaIra);
    
    return mediaIra;
}

/*
Sub-rotina: maiorQmedia
Objetivo: Dizer os alunos que tem ira maior que a media da turma
Parâmetros:
- Parâmetro1: tAluno alunos[], da os dados dos alunos
- Parâmetro2: int n, fornece a quantidade de alunos da turma
- Parâmetro3: double mediaIra, pega a media da turma para comparar e dizer quem possui o ira maior que a media da turma
*/
void maiorQmedia(tAluno alunos[], int n, double mediaIra)
{
    for(int i = 0; i < n; i++)
    {
        if(alunos[i].IRA > mediaIra)
        {
            printf("O aluno %s, que possui IRA %d, tem IRA maior que a média da turma.\n", alunos[i].nome, alunos[i].IRA);
        }
    }
}

//Fim do código
