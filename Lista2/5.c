/*
5. A importância de R$ 780.000,00 será dividida entre
*  três ganhadores de um concurso. Sendo que da quantia total:
*  O primeiro ganhador recebera 46%; O segundo recebera 32%;
*  O terceiro recebera o restante; Calcule e imprima a quantia ganha 
* por cada um dos ganhadores.
 */


#include<stdio.h>
#include<stdlib.h>
void prog(float x)
{	printf("O premio foi divido em");
	printf(" o primeiro ganhador devera ficar com %0.f", x*0.46  );
	printf(" segundo ganhador devera ficar com %0.f", x*0.36);
	printf(" terceiro ganhador devera ficar com %0.f", x*0.18    );
	}
int main(){ 
	float x;
	x=780000;
	prog(x);

	
	return 0;
}
