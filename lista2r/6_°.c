#include <stdio.h>
float quantia_liquida(float x){
	return((30*x)-(30*x*0.08));
}
int main()
{
	float dias;
	printf("DIGITE A QUANTIDADE DE DIAS TRABALHADOS\n");
	scanf("%f",&dias);
	printf("VALOR A SER PAGO %.2f",quantia_liquida(dias));
	return 0;
}

