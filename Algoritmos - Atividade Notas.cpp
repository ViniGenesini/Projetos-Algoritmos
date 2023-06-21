#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "portuguese");
	int i, nota[4], soma=0;
	float media;
	printf("\n NOTAS BIMESTRAIS");
	for(i=0;i<4;i++){
		printf("\n Informe a Nota do %dº bimestre: ",i+1);
		scanf("%d",&nota[i]);
	}
	for(i=0;i<4;i++){
		soma = soma + nota[i];
	}
	media = soma/4;
	printf("\n  Média Geral: %.2f",media);
	if(media>=7){
		printf("\n Aluno aprovado!");
	} else {
		printf("\n Aluno reprovado!");
	}
}