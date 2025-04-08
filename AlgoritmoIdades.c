/*
Autor: Murilo Oliva Mantovani RA:834730
Data de criação: 22/07/24
Data de modificação: 22/07/24
Objetivo: Algoritmo Idades
*/

#include <stdio.h>

int main(){
    
    //Ler o valor das idades e calcular o numero de alunos
    int i,num = 0, id, max=100,idade[max];

    printf("Quando acabar de dizer todas as idades, digite um número negativo!\nDigite a primeira idade: ");
    scanf("%d", &id);

    while (id >= 0 && num < max) {
        idade[num] = id;
        num++;
        printf("Digite a próxima idade: ");
        scanf("%d", &id);
    }
    
    
    //Declarar o intervalo de faixas etárias
    int inter[11] = 0;
    
    //Colocar cada idade na sua devida faixa etária
    for(i=0;i<num;i++){
        switch (idade[i]){
            case 0 ... 9:
                inter[0] += 1;
                break;
            case 10 ... 19:
                inter[1] += 1;
                break;
            case 20 ... 29:
                inter[2] += 1;
                break;    
            case 30 ... 39:
                inter[3] += 1;
                break;   
            case 40 ... 49:
                inter[4] += 1;
                break;   
            case 50 ... 59:
                inter[5] += 1;
                break;    
            case 60 ... 69:
                inter[6] += 1;
                break;   
            case 70 ... 79:
                inter[7] += 1;
                break;    
            case 80 ... 89:
                inter[8] += 1;
                break;    
            case 90 ... 99:
                inter[9] += 1;
                break;    
            case 100 ... 109:
                inter[10] += 1;
                break;    
        }
    }
    
    //Dizer a quantidade de idades em cada faixa etária
    printf("\nFaixas Etarias\n");
    for(i=0;i<=10;i++){
        printf("%d0 a %d9: %d\n", i, i, inter[i]);
    }
    
    //Fim do código
    return 0;
}