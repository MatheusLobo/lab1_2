#include <stdio.h>

int main()
{
	float maiornum,menornum,numx;
	maiornum=0;
	menornum=0;
	printf("Digite um numero inteiro");
	scanf("%f", &numx);
	while (numx>=0){
		if (numx>maiornum) {
			maiornum=numx;} else
				if (numx<menornum) {
					menornum=numx;}
}
				printf("O maior valor  = %f", maiornum);
				printf("O menor valor  = %f", menornum);			
	
	return 0;
}

