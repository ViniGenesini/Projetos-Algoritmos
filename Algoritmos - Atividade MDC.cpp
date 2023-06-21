#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "portuguese");
	int num1, num2, num3, x, y, a, b, c;
	printf("*** CALCULADORA DE MDC *** \n\n");
	printf("Digite números inteiros positivos: ");
	scanf("%d %d %d",&num1,&num2,&num3);
	if(num1>=num2 && num1>=num3){
	    a = num1;
	    if(num2>=num3){
	        b = num2;
	        c = num3;
	    } else {
	        b = num3;
	        c = num2;
	    }
	} else if(num2>=num1 && num2>=num3){
	    a = num2;
	    if(num1>=num3){
	        b = num1;
	        c = num3;
	    } else {
	        b = num3;
	        c = num1;
	    }
	} else if(num3>=num1 && num3>=num1){
	    a = num3;
	    if(num1>=num2){
	        b = num1;
	        c = num2;
	    } else {
	        b = num1;
	        c = num2;
	    }
	}
	if(num1<=0 || num2<=0 || num3<=0){
	    printf("*** VALOR(ES) INVÁLIDO(S): APENAS NÚMEROS POSITIVOS! *** \n\n");
	} else {
    	while(b!=0){
    	    x = a % b;
    	    y = b;
    	    b = x;
    	}
    	while(c!=0){
    	    x = y % c;
    	    y = c;
    	    c= x;
    	}
    	printf("\n*** RESULTADO ***\n\nMDC(%d, %d, %d) = %d",num1,num2,num3,y);
    }
}
