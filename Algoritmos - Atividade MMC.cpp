#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "portuguese");
	int num1, num2, num3, i, x, y;
	printf("*** CALCULADORA DE MMC *** \n\n");
	printf("Digite números inteiros positivos: ");
	scanf("%d %d %d",&num1,&num2,&num3);
	if(num1<0 || num2<0 || num3<0){
	    printf("*** VALOR(ES) INVÁLIDO(S): APENAS NÚMEROS POSITIVOS! *** \n\n");
	} else {
    	for(i=1;i>0;i++){
    	    x = (num1*i) % num2;
    	    if(x==0) break;
    	}
    	y = num1*i;
    	for(i=1;i>0;i++){
    	    x = (y*i) % num3;
    	    if(x==0) break;
    	}
    	printf("\n*** RESULTADO ***\n\nMMC(%d, %d, %d) = %d",num1,num2,num3,y*i);
    }
}
