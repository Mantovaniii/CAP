/*
Autor:Murilo Oliva Mantovani
RA:834730
Data de criação:21/08/24
Data de modificação:21/08/24
Objetivo:Calcular se é um número primo ou não
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    //Declarar as variáveis
    int i,valor,decimal;
    bool primo=true;
    
    //Ler o valor que será analisado
    printf("Digite o valor:");
    scanf("%d", &valor);
    
    //Calcular se o valor é primo
    for(i=2;i<=valor/2;i++)
    {
        
        decimal = valor % i;
        
        if(decimal == 0)
        
        {
            
            primo = false;
            
        }
    }
    if(primo == false)
    {
        //Caso ele nao for primo
        printf("O valor nao e primo");
        
    }
    else
    {
        //Caso ele for primo
        printf("O valor e primo");
        
    }
    //Fim do codigo
    return 0;
    
}