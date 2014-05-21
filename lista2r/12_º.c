//12º//
#include <stdio.h>
#include<math.h>
float media(int opcao ){
	switch(opcao){
		float x,y,z;
		case 1:
			printf("MEDIA Geometrica %.2f",pow((x*y*z),1/3));
			break;
		case 2:
			printf("MEDIA Ponderada %.2f",(x+(2*y)+(3*z))/6);
			break;
		case 3:	
			printf("MEDIA Harmonica %.2f",(1/(1/x)+(1/y)+(1/z)));
			break;
		case 4:
			printf("MEDIA Aritimetica %.2f",(x+y+z)/3);
			break;
	}
}
int main(){
	int X,Y,Z,opcao;
	printf("Digite tres numeros inteiros\n");
	scanf("%d%d%d",&X,&Y,&Z);
	printf("Escolha uma das opcoes abaixo :");
	printf("\n\n		MEDIA\n1-Geometrica\n2-Ponderada\n3-Harmonica\n4-Aritimetica\n");
	scanf("%d",&opcao);
	media(opcao);  
	}
