#include<stdio.h>
float ganhador1(float quantia){
	return(quantia *0.46);
 }
float ganhador2(float quantia){
	return(quantia*0.32);
}
float ganhador3(float quantia){
	return(quantia*0.22);
}
 int main(void){
	char nome1[20],nome2[20],nome3[20]; 
	float premio;
	printf("Digite o valor do premio\n");
	scanf("%f",&premio);
	printf("Digite o nome dos ganhadores");
	printf("\nGANHADOR 1->");
	scanf("%s",&nome1);
	printf("\nGANHADOR 2->");
	scanf("%s",&nome2);
	printf("\nGANHADOR 3->");
	scanf("%s",&nome3);
	
	printf("\nO primeiro ganhador %s recebera a quantia = R$ %.2f",nome1,ganhador1(premio));
	printf("\nO segundo ganhador %s recebera a quantia = R$ %.2f",nome2,ganhador2(premio));
	printf("\nO terceiro ganhador %s recebera a quantia = R$ %.2f",nome3,ganhador3(premio));
	return(0);
 }
 
