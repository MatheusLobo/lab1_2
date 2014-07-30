//Faça um Programa que pergunte quanto você ganha por hora e o número de
//horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês, 
//sabendo-se que são descontados 11% para o Imposto de Renda, 8% para o INSS e 5% para o sindicato,
//faça um programa que nos dê:
//salário bruto.
//quanto pagou ao INSS.
//quanto pagou ao sindicato.
//o salário líquido.
//calcule os descontos e o salário líquido, conforme a tabela abaixo:
//+ Salário Bruto : R$
//- IR (11%) : R$
//- INSS (8%) : R$
//- Sindicato ( 5%) : R$
//= Salário Liquido : R$

# include <stdio.h>
int main(){
    float valor_hora,num_hora,imp,inss,sindicato,aux,sal_bruto,sal_liquido;
    printf("Digite o Quanto custa a hora de trabalho\n");
    scanf("%f", &valor_hora);
    printf("Digite a quantidade de horas trabalhada\n");
    scanf("%f", &num_hora);
    sal_bruto=valor_hora*num_hora;
    imp=sal_bruto*0.11;
    inss=sal_bruto*0.08;
    sindicato=sal_bruto*0.05;
    sal_liquido=sal_bruto-(imp+inss+sindicato);
    printf("O Valor do salario liquido é = %f\n", sal_liquido);
    printf("O Valor pago ao INSS é = %f\n", inss);
    printf("O Valor pago ao sindicato é = %f\n", sindicato);
    printf("O Valor do salario bruto é = %f\n", sal_bruto);
    scanf("%f", &num_hora);
    return 0;
}
