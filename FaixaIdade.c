#include <stdio.h>
#include <string.h>

int main() {
    int idade;
    char faixa[20];
    
    printf("Digite a sua idade:\n");
    scanf("%d", &idade);
    
    if (idade >= 0 && idade <= 12) {
        strcpy(faixa, "Infancia");
    } 
    if (idade >= 13 && idade <= 17) {
        strcpy(faixa, "Adolescencia");
    } 
    if (idade >= 18 && idade <= 25) {
        strcpy(faixa, "Juventude");
    } 
    if (idade >= 26 && idade <= 35) {
        strcpy(faixa, "Adulto Jovem");
    } 
    if (idade >= 36 && idade <= 45) {
        strcpy(faixa, "Adulto");
    } 
    if (idade >= 46 && idade <= 60) {
        strcpy(faixa, "Maior Idade");
    } 
    if (idade >= 61 && idade <= 120) {
        strcpy(faixa, "Idoso");
    } 
    if (idade<0) {
        strcpy(faixa, "ERRO");
    }
    
    printf("%s\n", faixa);
    
    return 0;
}
