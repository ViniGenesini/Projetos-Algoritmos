#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	int v = 22000, s;
	setlocale(LC_ALL, "portuguese");
	printf(" Ol� Isabela! \n\n Qual � o valor do seu sal�rio? \n\n ");
	scanf("%d",&s);
	int m = v/s;
	if(s>=22000){
		m = 1;
		printf("Voc� ter� que trabalhar no m�nimo %d m�s para conseguir viajar!",m);
	} else {	
	printf("Voc� ter� que trabalhar no m�nimo %d meses para conseguir viajar!",m);
	}
}
