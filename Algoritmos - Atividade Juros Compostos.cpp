#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h> 
main(){
	setlocale(LC_ALL, "portuguese");
	float VL, N, I, VF, X;
	printf("*** CALCULA JUROS COMPOSTOS *** \n\n");
	printf("Digite o valor presente: R$ ");
	scanf("%f",&VL);
	printf("Digite o período em meses: ");
	scanf("%f",&N);
	printf("Digite a taxa de juros (%): ");
	scanf("%f",&I);
	I = I/100;
	for(int i=0;i<N;i++){
		X = pow(1+I,i);
		VF = VL*X;
		printf("O valor no %dº mês será de: R$ %.2f \n",i+1,VF);
	}
}
