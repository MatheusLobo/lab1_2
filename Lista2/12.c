//12. Faça um programa que leia trés números inteiros
//positivos e efetue o caculo de uma das seguintes médias
//de acordo com um valor numérico digitado pelo usuário
//mostrado na tabela a seguir.

#include <stdio.h>
#include <math.h>
#include<stdlib.h>
void MediaGeometrica(){
     	float a,b,c,aux;
     printf("Informe os numeros");
		scanf("%f %f %f",&a,&b,&c);
		aux = pow((a*b*c),1/3);
		printf("A media geometrica eh: %f",aux);
     
     }
void MediaPonderada(){
     	float a,b,c,aux;
     printf("Informe os numeros");
		scanf("%f %f %f",&a,&b,&c);
		aux = (a+(2*b)+(3*c))/6;
		printf("A media ponderada eh : %f",aux);
     
     }
void MediaHarmonica(){
     	float a,b,c,aux;
     	printf("Informe os numeros");
		scanf("%f %f %f",&a,&b,&c);
		aux = 1/((1/a)+(1/b)+(1/c));
		printf("A media harmonica eh: %f",aux);
     
     }
void MediaAritmetic(){
     	float a,b,c,aux;
     	printf("Informe os numeros");
		scanf("%f %f %f",&a,&b,&c);
		aux = (a+b+c)/3;
		printf("A media aritmetica eh: %f",aux);
     
     }
     
int main(){
	int menu;
	float a,b,c,aux;
	printf("Escolha um opcao: \n 1-Media Geometrica \n 2-Media Ponderada \n 3-Media Harmonica \n 4-Media Aritmetica");
	scanf("%d",&menu);
	switch (menu) {
		case 1:
		     MediaGeometrica();
		break;
		case 2:
		     MediaPonderada();
		break;
		case 3:
	         MediaHarmonica();
		break;
		case 4:
             MediaAritmetic();
		break;
		default:
		printf("Opcao escolhida invalida");
		break;
		}
		system("pause");
	return(0);
	}	
