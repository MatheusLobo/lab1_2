#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(void)
{
    int i,x,y,result,acertos;
    printf("intervalo da rand: [0,%d]\n", RAND_MAX);
	        acertos=0;
    for(i=1 ; i <= 5 ; i++){ 

        srand( (unsigned)time(NULL) );
        x = 1 + ( rand() % 100 );
		y = 1 + ( rand() % 100 );
		printf("\nQual a soma Soma de %d + %d :\n",x,y);
		scanf("%d",&result);
		if (x+y==result){
			printf("VOCE ACERTOU :)\n");
			acertos=acertos++;
		}
		else
			printf("VOCE ERROU :(\n");
	}   
	printf("\nTotal de acertos = %d",acertos);
}
