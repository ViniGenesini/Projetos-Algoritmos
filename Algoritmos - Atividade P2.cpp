#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "portuguese");
	float num1, num2, i=0;
	while(i!=9){
		printf("*** CALCULADORA DIGITAL *** \n\n 1- SOMA\n 2- SUBTRAÇÃO\n 3- MULTIPLICAÇÃO\n 4- DIVISÃO\n 9- TERMINAR\n OPÇÃO: ");
		scanf("%f",&i);
		if(i==1){
			printf("Digite o primeiro número: ");
			scanf("%f",&num1);
			printf("Digite o segundo número: ");
			scanf("%f",&num2);
			printf("\n*** RESULTADO *** \n\n %.2f + %.2f = %.2f\n\n",num1,num2,num1+num2);
		} else if(i==2){
			printf("Digite o primeiro número: ");
			scanf("%f",&num1);
			printf("Digite o segundo número: ");
			scanf("%f",&num2);
			printf("\n*** RESULTADO *** \n\n %.2f - %.2f = %.2f\n\n",num1,num2,num1-num2);
		} else if(i==3){
			printf("Digite o primeiro número: ");
			scanf("%f",&num1);
			printf("Digite o segundo número: ");
			scanf("%f",&num2);
			printf("\n*** RESULTADO *** \n\n %.2f * %.2f = %.2f\n\n",num1,num2,num1*num2);
		} else if(i==4){
			printf("Digite o primeiro número: ");
			scanf("%f",&num1);
			printf("Digite o segundo número: ");
			scanf("%f",&num2);
			printf("\n*** RESULTADO *** \n\n %.2f / %.2f = %.2f\n\n",num1,num2,num1/num2);
		} else if(i!=9){
			printf("\n*** VALOR INVÁLIDO! ***\n\n");
			i=0;
		}
	}
}
