//Fa�a um Programa que pergunte quanto voc� ganha por hora e o n�mero de
//horas trabalhadas no m�s. Calcule e mostre o total do seu sal�rio no referido m�s, 
//sabendo-se que s�o descontados 11% para o Imposto de Renda, 8% para o INSS e 5% para o sindicato,
//fa�a um programa que nos d�:
//sal�rio bruto.
//quanto pagou ao INSS.
//quanto pagou ao sindicato.
//o sal�rio l�quido.
//calcule os descontos e o sal�rio l�quido, conforme a tabela abaixo:
//+ Sal�rio Bruto : R$
//- IR (11%) : R$
//- INSS (8%) : R$
//- Sindicato ( 5%) : R$
//= Sal�rio Liquido : R$

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
    printf("O Valor do salario liquido � = %f\n", sal_liquido);
    printf("O Valor pago ao INSS � = %f\n", inss);
    printf("O Valor pago ao sindicato � = %f\n", sindicato);
    printf("O Valor do salario bruto � = %f\n", sal_bruto);
    scanf("%f", &num_hora);
    return 0;
}
