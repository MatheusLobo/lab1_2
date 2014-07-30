#include <stdio.h>
float hipotenusa (float x,float y){
	return((x*x)+(y*y));
}
int main()
{
	float cateto1,cateto2;
	printf("DIGITE O VALOR DO PRIMEIRO CATETO\n");
	scanf("%f",&cateto1);
	printf("DIGITE O VALOR DO SEGUNDO CATETO\n");
	scanf("%f",&cateto2);
	printf("HIPOTENUSA = %.2f",hipotenusa(cateto1,cateto2));
	return 0;
}

