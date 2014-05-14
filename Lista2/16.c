
#include <stdio.h>
void ifs(){
     	float alt, peso;
	char sex;
   	if (sex == 'm'){
		peso = (((72.7*alt)-58)); 
		printf("Seu peso ideal eh: %.2f", peso);	
		}
	else {
		peso = (((72.7*alt)-58));
		printf("Seu peso ideal eh: %.2f", peso);
		}   
     }
int main()
{
	printf("Digite sua altura e sexo(m ou f):");
	float alt, peso;
	char sex;
	scanf("%f %c", &alt, &sex);
 ifs();
	return 0;
}
