#include <stdio.h>
void ifs(){
     	float h, pso, imc;
     if (imc <= 18.5)
	{printf("Abaixo do peso");
	}	
	else if (imc >= 18.5 && imc <=24.9)
	{printf("Saudavel");
	}
    	else if (imc >= 25 && imc <= 29.9)
	{printf("Peso em excesso");
	}
    	else if (imc >= 30 && imc <= 34.9)
	{printf("Obesidade grau 1");
	}
	else if (imc >= 35 && imc <= 39.9)
	{printf("Obesidade grau 2");
	}
	else if (imc >= 40)
	{printf("Obesidade grau 3");
	}
     }
int main ()
{
	float h, pso, imc;
	printf("Digite altura e peso");
	scanf("%f %f", &h, &pso);	
	imc= pso/(h*h);
	ifs();
return (0);
}
