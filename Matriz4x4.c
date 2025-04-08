#include <stdio.h>

int main(){
    //Cria uma variavel para guardar os valores da matriz
    int matriz[3][3]; //matriz[1][1] matriz[1][2]...matriz[3][3]
    //Variavel para linha e coluna
    int i,j;

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Elemento [%d] [%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\nA matriz 4x4 e:\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ",matriz[i][j]);
        }
    printf("\n");
    }
}