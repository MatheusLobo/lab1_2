#include <stdio.h>
int sub_rotina(int a,int b){//retorna o maior valor na variavel a
	int aux;
	if (a>b)
		return(a,b);
	else{
		aux=a;
		a=b;
		b=aux;
		return(a,b);	
	}
}
int main(){
	int A=2,B=3;
	sub_rotina(A,B);
}
