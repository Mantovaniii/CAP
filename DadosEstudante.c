/*
Autor:Murilo Oliva Mantovani
RA:834730
Data de criação:12/08/24
Data de modificação:12/08/24
Objetivo:Armazenar os dados dos alunos
*/

#include <stdio.h>
#include <string.h>

#define tamanho 100

int main(){
    
    int soma=0;
    
    typedef struct{
        char tipoLogradouro[tamanho];
        char logadouro[tamanho];
        int numero;
        char complemento[tamanho];
        char bairro[tamanho];
        char cidade[tamanho];
        char CEP[tamanho];
    } tEndereço;
    
    typedef struct{
        int RA;
        char nome[tamanho];
        int IRA;
        char sexo[tamanho];
        tEndereço endereço;
        int idade;
        float nota;
    } tAluno;
    tAluno aluno[tamanho];
    
    int i,qtd=0,cid,masc=0,fem=0;
    char op[0];
    while(op[0]='s'){
        for (i=0;i<tamanho;i++)
        {
            printf("Digite o RA do aluno(a):\n");
            scanf("%d", &aluno[i].RA);
            
            printf("Digite o nome do aluno(a):\n");
            getchar();
            scanf(" %[^\n]%*c", aluno[i].nome); //Tem como escrever &aluno.nome[0], funciona da mesma forma
            
            printf("Digite o IRA do aluno(a):\n");
            scanf("%d", &aluno[i].IRA);
            
            printf("Digite o sexo do aluno(a)(M ou F):\n");
            scanf("%s", aluno[i].sexo);
            if(strcmp(aluno[i].sexo, "M")==0 || strcmp(aluno[i].sexo, "m")==0){
                masc += 1;
            } else if(strcmp(aluno[i].sexo, "F")==0 || strcmp(aluno[i].sexo, "f")==0){
                fem += 1;
            }
            printf("Digite o tipo logradouro do aluno(a):\n");
            getchar();
            scanf("%[^\n]%*c", aluno[i].endereço.tipoLogradouro);
            
            printf("Digite o logadouro:\n");
            getchar();
            scanf("%[^\n]%*c", aluno[i].endereço.logadouro);
            
            printf("Digite o numero do endereco:\n");
            getchar();
            scanf("%d", &aluno[i].endereço.numero);
            
            printf("Digite o complemento:\n");
            getchar();
            scanf("%[^\n]%*c", aluno[i].endereço.complemento);
            
            printf("Digite o bairro:\n");
            getchar();
            scanf("%[^\n]%*c", aluno[i].endereço.bairro);
            
            printf("Digite o cidade:\n");
            getchar();
            scanf("%[^\n]%*c", aluno[i].endereço.cidade);
            if(strcmp(aluno[i].endereço.cidade,"Araraquara")==0 || strcmp(aluno[i].endereço.cidade,"araraquara")==0 || strcmp(aluno[i].endereço.cidade,"ARARAQUARA")==0){
                cid += 1;
            }
            printf("Digite o CEP:\n");
            getchar();
            scanf("%[^\n]%*c", aluno[i].endereço.CEP);
            
            printf("Digite a sua idade:\n");
            scanf("%d", &aluno[i].idade);
            
            printf("Digite sua nota media:");
            scanf("%f", &aluno[i].nota);
            
            soma += aluno[i].nota;
            
            qtd += 1;
            
            printf("Tem mais alunos?\nSIM(s) NAO(f)\n");
            scanf("%c", &op[0]);
            while (strcmp(op[0],'s')==1 || strcmp(op[0],'f')==1){
                printf("ERRO\n");
                printf("Tem mais alunos?\nSIM(s) NAO(f)");
                scanf("%s", &op[0]);
            }
        }
    }
    for(i=0;i<qtd;i++){
        printf("RA: %d", aluno[i].RA);
        printf("Nome: %s", aluno[i].nome);
        printf("IRA: %d", aluno[i].IRA);
        printf("Sexo: %s", aluno[i].sexo);
        printf("Tipo de logradouro: %s", aluno[i].endereço.tipoLogradouro);
        printf("Logradouro: %s", aluno[i].endereço.logadouro);
        printf("Complemento: %d", aluno[i].endereço.numero);
        printf("Bairro: %s", aluno[i].endereço.complemento);
        printf("Cidade: %s", aluno[i].endereço.bairro);
        printf("CEP: %s", aluno[i].endereço.cidade);
        printf("RA: %s", aluno[i].endereço.CEP);
    }
    
    float media;
    media = soma/qtd;
    
    printf("Media da sala:\n%f", media);
    printf("Feminino:%d",fem);
    printf("Masculino:%d",masc);
    printf("Pessoas de araraquara:%d",cid);
}
    