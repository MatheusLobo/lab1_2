//Fa�a um Programa que pergunte 
//quanto voc� ganha por hora e o n�mero de horas
//trabalhadas no m�s. Calcule e mostre o total do seu sal�rio no referido m�s.
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
