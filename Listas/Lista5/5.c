#include <stdio.h>
soma(int a,int b){
	a=a+b;	
}

int main(int *a){
	int A,B;
	scanf("%d",&A);
	scanf("%d",&B);
	soma(A,B);
	printf("%d/n%d",a,B);
}

