#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h> 
main(){
	setlocale(LC_ALL, "portuguese");
	int i, N2;
	float VP, N, I, VF, X;
	printf("*** CALCULA JUROS COMPOSTOS *** \n\n");
	printf("Digite o valor futuro: R$ ");
	scanf("%f",&VF);
	printf("Digite o período em meses: ");
	scanf("%f",&N);
	printf("Digite a taxa de juros (%): ");
	scanf("%f",&I);
	I = I/100;
	N2 = N;
	for(i=0;i<N;i++){
		X = pow(1+I,i);
		VP = VF/X;
		N2--;
		printf("O valor no %dº mês será de: R$ %.2f \n",N2+1,VP);
	}
	X = pow(1+I,i);
	VP = VF/X;
	printf("O valor presente é de: R$ %.2f \n",VP);
}
