//Teste de calculadora em C

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	float n1,n2,r,a,b;
	int m,p,rz,c;
	
	REFAZ:system("cls");
	printf("<-> Calculadora <->\n");
	printf("\nValor 1:\n");
	scanf("%f", &n1);
	
	printf("\nQual sera a operacao?\nSOMA(1)\nSUBTRACAO(2)\nMULTIPLICACAO(3)\nDIVISAO(4)\nEXPONENCIACAO(5)\nRAIZ(6)\n");
	scanf("%d", &m);
	
	if(m==5){
		printf("\nELEVADO AO QUADRADO(1)\nELEVADO AO CUBO(2)\nELEVADO A QUALQUER(3)\n");
		scanf("%d", &p);
		switch(p){
			case 1:
				r=pow(n1,2);
				break;
			case 2:
				r=pow(n1,3);
				break;
			case 3:
				printf("Valor da potencia:\n");
				scanf("%f", &a);
				r=pow(n1,a);
				break;
		}
		printf("\nResultado: %f\n\n", r);
		system("pause");
		printf("\nQuer fazer outra conta?SIM(1) NAO(2)\n");
		scanf("%d", &c);
		if(c==1){
			goto REFAZ;
		}
		exit(0);
	}
	if(m==6){
		printf("\nRAIZ QUADRADA(1)\nRAIZ CUBICA(2)\nRAIZ QUALQUER(3)\n");
		scanf("%d", &rz);
		switch(rz){
			case 1:
				r=pow(n1,1.0/2);
				break;
			case 2:
				r=pow(n1,1.0/3);
				break;
			case 3:
				printf("\nValor da raiz:\n");
				scanf("%f", &b);
				r=pow(n1,1.0/b);
				break;
			}
		printf("\nResultado: %f\n\n", r);
		system("pause");
		printf("\nQuer fazer outra conta?SIM(1) NAO(2)\n");
		scanf("%d", &c);
		if(c==1){
			goto REFAZ;
		}
		exit(0);
	}

	printf("\nValor 2:\n");
	scanf("%f", &n2);
	
	switch(m){
		case 1:
			r=n1+n2;
			break;
		case 2:
			r=n1-n2;
			break;
		case 3:
			r=n1*n2;
			break;
		case 4:
			r=n1/n2;
			break;
	}	
	printf("\nResultado: %f\n\n", r);
	system("pause");
	printf("\nQuer fazer outra conta?SIM(1) NAO(2)\n");
	scanf("%d", &c);
	if(c==1){
		goto REFAZ;
	}
	exit(0);
}
