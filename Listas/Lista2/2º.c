/*2. Ler um numero e retorne seu antecessor e seu sucessor*/
#include <stdio.h>
int sucessor(int num){
	return(num+1);}
int antecessor(int num){
	return(num-1);
}
int main(){
	int NUM;
	printf("Digite um numero inteiro:\n");
	scanf("%d",&NUM);
	printf("Sucessor do numero = %d ",sucessor(NUM));
	printf("\nAnteessor do numero = %d\n ",antecessor(NUM));
	system("pause");
}
