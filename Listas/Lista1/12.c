//Faça um Programa que pergunte 
//quanto você ganha por hora e o número de horas
//trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.
# include <stdio.h>
int main()
{
    int valor_por_hora,numero_horas_trabalhadas,salario_final;
    printf("Digite o valor de horas trabalhadas por mes = ");
    scanf("%d", &valor_por_hora);
    printf("Digite o numero de horas trabalhadas");
    scanf("%d", &numero_horas_trabalhadas);
    salario_final=(numero_horas_trabalhadas*valor_por_hora);
    printf("O salario total no mes sera %d", salario_final);
    scanf("%d", &valor_por_hora);
    return 0;
}
