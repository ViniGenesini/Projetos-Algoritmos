#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "portuguese");
	int ID;
	printf("\n\n Qual é a sua idade? \n");
	scanf("%d",&ID);
	if(ID>17){
		printf("Você é maior de idade!");
	} else {
		printf("Você é menor de idade!");
	}
}
