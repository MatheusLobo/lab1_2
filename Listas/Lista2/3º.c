/*3. Efetuar a leitura de trés valores e apresentar como resultado final a soma dos 
quadrados dos três valores lidos*/
#include <stdio.h>
int soma_quadrados(int NUM1,int NUM2,int NUM3){
	return ((NUM1*NUM1)+(NUM2*NUM2)+(NUM3*NUM3));
}
int main(){
	int num1,num2,num3;
	printf("Digite tres numeros \n");
	scanf("%d\n%d\n%d",&num1,&num2,&num3);
	printf("RESULTADO = %d\n",soma_quadrados(num1,num2,num3));
	system("pause");
}
