//9. Receber o sal�rio de um trabalhador e o 
//valor da presta��o de um empr�stimo, se a presta��o 
//for maior que 20% do sal�rio imprima: �Empr�stimo n�o
//concedido�, caso contrario imprima: �Empr�stimo Concedido�
#include<stdio.h>
#include<stdlib.h>

void simnao(){
     int sal20,sal_trab,valor_prest,emprestimo,prest;
    sal20=sal_trab*0.2;
    valor_prest=emprestimo/prest;
    if (valor_prest>sal20){
                           printf("Emprestimo nao concedido");
                           }else printf("Emprestimo concedido");
                           
     
}
int main(){ 
    int sal_trab,emprestimo,prest;
    printf("Digite o salario do trabalhador\n");
    scanf("%d", &sal_trab);
    printf("Digite o valor do emprestimo\n");
    scanf("%d", &emprestimo);
    printf("Digite a quantidade de presta�oes\n");
    scanf("%d", &prest);
    simnao();
    return 0;

    
    
    
}
