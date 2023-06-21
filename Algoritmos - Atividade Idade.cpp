#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "portuguese");
	int idade;
	printf("\n\n Digite o ano de nascimento do jogador: ");
	scanf("%d",&idade);
	if(idade<1977){
		printf("O jogador deverá jogar pela categoria Veterano.");
	} else if(idade>=1977 && idade<=1996){
		printf("O jogador deverá jogar pela categoria Adulto.");
	} else if(idade>=1997 && idade<=1999){
		printf("O jogador deverá jogar pela categoria Juvenil.");
	} else if(idade>=2000 && idade<=2002){
		printf("O jogador deverá jogar pela categoria Infantil.");
	} else {
		printf("Idade inválida!");
	}
}
