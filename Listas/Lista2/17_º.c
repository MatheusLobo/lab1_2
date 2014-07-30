#include <stdio.h>
float imc(float peso, float altura){
	float IMC;
	IMC=((peso)/(altura*altura));
	
	if (IMC <18.5){
		printf("\nABAIXO DO PESO");
	}	
	if ((IMC >18.6) && (IMC<24.9)){
		printf("\nSAUDADAVEL");
	}	
	if ((IMC >25)&& (IMC<29.9)){
		printf("\nPESO EM EXCESSO");
	}
	if ((IMC >30)&&(IMC<34.9)){
		printf("\nOBESIDADE GRAU I");
	}
	if ((IMC >35)&& (IMC<39.9)){
		printf("\nOBESIDADE GRAU II(severa)");
	}
	if (IMC>40){
		printf("\nOBESIDADE GRAU III(mórbida)");
	}		
}						
int main() {
	float PESO,ALTURA;
	printf("Digite seu peso\n");
	scanf("%f",&PESO);
	printf("Digite sua altura\n");
	scanf("%f",&ALTURA);
	imc(PESO,ALTURA);
}
