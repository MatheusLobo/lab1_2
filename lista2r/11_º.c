/* 11° Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se aposentar. As condições para aposentadoria são:
Ter pelo menos 65 anos, ou ter trabalhado pelo menos 30 anos, ou ter pelo menos 60 anos e trabalhado pelo menos 25
anos.*/
#include<stdio.h>
int aposentar(int idade, int anostrabalho){
	if ((idade>=65) || (anostrabalho>=30) || ((idade>=60)&&(anostrabalho>=25))){
		printf("\nCondicao para aposentadoria deferida");
	}
	else 
		printf("Condicao para aposentadoria indeferida");
}
int main(){
	int Idade,Anostrabalho;
	printf("Digite sua idade : ");
	scanf("%d",&Idade);
	printf("Digite seu tempo de Servico : ");
	scanf("%d",&Anostrabalho);
	aposentar(Idade,Anostrabalho);
}
