/*9ª Receber o salário de um trabalhador e o valor da prestação de um empréstimo, se a
prestação for maior que 20% do salário imprima: “Empréstimo não concedido”, caso
contrario imprima: “Empréstimo Concedido”*/
# include <stdio.h>
float emprestimo(float SALARIO, float PRESTACAO){
	if ((PRESTACAO)>(SALARIO*0.20)){
		printf("Emprestimo Nao Concedido");
	}
	else 
		printf("Emprestimo Concebido");
}
int main(){
	float salario,prestacao;
	printf("Digite o valor do seu salario :");
	scanf("%f",&salario);
	printf("Digite o valor da prestacao do Emprestimo : ");
	scanf("%f",&prestacao);
	emprestimo(salario,prestacao);
}

