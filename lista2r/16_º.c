//16º//
#include<stdio.h>
float homem(float h){
	printf("Peso do homem ideal d= %f",((72.7*h)-58));
}
float mulher(float h){
	printf("Peso da mulher ideal = %f",(62.1*h)-44.7);
}	
int main(){
	char *sexo;
	float altura;
	printf("Digite sua altura\n");
	scanf("%d",&altura);
	printf("Digite seu sexo 'M' para masculino e 'F' para feminino\n");
	scanf("%s",sexo);
	if (sexo=="M"){
		homem(altura);
	}
	else
		mulher(altura);
}		
