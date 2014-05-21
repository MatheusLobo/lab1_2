/*Escreva o menu de opções abaixo, leia a opção do usuário e execute a operação
escolhida Escreva uma mensagem de erro se a opção escolhida for invalida.
1- Soma de 2 números.
2- Diferença entre 2 números (maior pelo menor).
3- Produto entre 2 números.
4- Divisão entre 2 números (o denominador não pode ser zero).*/

#include<stdio.h>
int menu (int opcao){
	switch (opcao){
		int x,y;
		case 1:	
			printf("Digite dois numeros inteiros\n");
			scanf("%d%d",&x,&y);
			printf("A Soma de 2 numeros : %d ",(x+y));
			break;
		case 2:
			if (x>y){
				printf("Digite dois numeros inteiros\n");
				scanf("%d%d",&x,&y);
				printf("Diferença entre 2 números %d: ",(x-y)); 
				break;
			}
			else {
				printf("Digite dois numeros inteiros\n");
				scanf("%d%d",&x,&y);
				printf("Diferença entre 2 números %d: ",(y-x)); 
			break;
		case 3:
			printf("Digite dois numeros inteiros\n");
			scanf("%d%d",&x,&y);
			printf("Produto entre 2 números: %d ",(x*y));
			break;
		case 4:
		if (y!=0){		
			printf("Digite dois numeros inteiros\n");
			scanf("%d%d",&x,&y);
			printf("Divisão entre 2 números: %d ",(x/y));
			break;	
		}
		else{
			printf("Divisão impossivel ");	
			break;
		}
	}
}
}
int main(){
	int OPCAO;
	printf("		MENU\n1- Soma de 2 numeros\n2- Diferenca entre 2 numeros\n3- Produto entre 2 numeros\n4- Divisao entre 2 numeros\n-> ");
	scanf("%d",&OPCAO);
	menu(OPCAO);
}
	

