/* 
Autor:Murilo Oliva Mantovani RA=834730
Data de criação:10/07/2024
Data de alteração:10/07/2024
Objetivo:Calcular a nota media de CAP
*/

#include <stdio.h>

int main(){
    
    //Declaração das variaveis
    float media,provas=0,ats=0;
    int nAts,nProvas;
    
    //Ler a quantidade de provas
    printf("Qual a quantidade de provas?\n");
    scanf("%d", &nProvas);
    
    //Ler a quantidade de trabalhos
    printf("Qual a quantidade de trabalhos?\n");
    scanf("%d", &nAts);
    
    float p[nProvas],at[nAts];
    
    //Ler as notas das provas
    for (int i=0;i<=nProvas-1;i++){
        printf("Diga a sua nota na p%d:", i+1);
        scanf("%f", &p[i]);
    }
    
    //Ler as notas das atividades
    for (int i=0;i<=nAts-1;i++){
        printf("Diga sua nota na at%d:", i+1);
        scanf("%f", &at[i]);
        ats += at[i]; // ats = ats + at[i];
    }
    
    //Calcular a media das notas
    provas = (p[0]*0.25) + (p[1]*0.25) + (p[2]*0.30);
    media = provas + (ats/nAts) * 0.2;
    
    //Diga a media das notas
    printf("A sua media das notas de CAP foi de: %.2f", media);
    
    return 0;
}