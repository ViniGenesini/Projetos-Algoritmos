#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	int v = 22000, s;
	setlocale(LC_ALL, "portuguese");
	printf(" Olá Isabela! \n\n Qual é o valor do seu salário? \n\n ");
	scanf("%d",&s);
	int m = v/s;
	if(s>=22000){
		m = 1;
		printf("Você terá que trabalhar no mínimo %d mês para conseguir viajar!",m);
	} else {	
	printf("Você terá que trabalhar no mínimo %d meses para conseguir viajar!",m);
	}
}
