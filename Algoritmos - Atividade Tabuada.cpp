#include<stdio.h>
main(){
	int t;
	printf("\n\n OI :) \n\n CAQUI & VINI \n\n-= CALCULADORA DE TABUADA =- \n\n Qual tabuada deseja calcular?: ");
	scanf("%d",&t);
	for(int x;x<11;x++){
		printf("\n\n %d * %d = %d",t,x,t*x);
	}
}
