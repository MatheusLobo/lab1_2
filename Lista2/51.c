/*
5. A importância de R$ 780.000,00 será dividida entre
*  três ganhadores de um concurso. Sendo que da quantia total:
*  O primeiro ganhador recebera 46%; O segundo recebera 32%;
*  O terceiro recebera o restante; Calcule e imprima a quantia ganha 
* por cada um dos ganhadores.
 */


#include<stdio.h>
#include<stdlib.h>
int money(float primeiro,segundo,terceiro){
	
	primeiro=780000*0.46;
	segundo=780000*0.36;
	terceiro=primeiro-segundo;
	return 0;

}

int main(){ 
	float primeiro,segundo,terceiro;
	money();
	printf("O premio foi divido em");
	printf(" o primeiro ganhador devera ficar com %f", primeiro  );
	printf(" segundo ganhador devera ficar com %f", segundo);
	printf(" terceiro ganhador devera ficar com %f", terceiro     );
	
	return 0;
}

