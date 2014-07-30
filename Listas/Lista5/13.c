#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void vetor(int *a,float *b,char *c)
{
    int i=*a;
	float j=*b;
	char k=*c; 
    printf("\n %d %.2f %c\n",i,j,k);  
	i=*a+1;// recebe mais um ao inteiro
    j=*b+1;//recebe mais um ao real
    k=*c+20;// recebe mais 20 ao caracter que é igual a mais um pela tabela ASCI
    printf("\n %d %.2f %c\n",i,j,k);    
}

int main() {
	int a;
	float b;
	char c;
    scanf("%d",&a);  
    scanf("%f",&b);      
    scanf("%s",&c);     
    vetor(&a,&b,&c);
    return 0;
}
