#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "portuguese");
	int i=0;
	float media, nota[4], soma=0;
	printf("\n NOTAS BIMESTRAIS");
	do{
		printf("\n Informe a Nota do %dº bimestre: ",i+1);
		scanf("%f",&nota[i]);
		i++;
	}while(i<4);
	i=0;
	do{
		soma = soma + nota[i];
		i++;
	}while(i<4);
	media = soma/4;
	printf("\n  Média Geral: %.2f",media);
	if(media>=7){
		printf("\n Aluno aprovado!");
	} else {
		printf("\n Aluno reprovado!");
	}
}
