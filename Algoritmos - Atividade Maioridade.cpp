#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "portuguese");
	int ID;
	printf("\n\n Qual � a sua idade? \n");
	scanf("%d",&ID);
	if(ID>17){
		printf("Voc� � maior de idade!");
	} else {
		printf("Voc� � menor de idade!");
	}
}
