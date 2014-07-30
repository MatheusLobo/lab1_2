/*4. Receber o salario de um funcionário, calcular e mostrar seu novo salário, sabendo que 
ele recebeu um aumento de 25%.*/
#include <stdio.h>
float salario_funcionario(float salario){
	float novo_salario;
	novo_salario=salario*0.25;
	return(novo_salario+salario);
}
int main(){
	float SALARIO;
	printf("Digite seu salario ");
	scanf("\n%f",&SALARIO);
	printf("NOVO SALARIO = %f \n",salario_funcionario(SALARIO));
	system("pause");
}
