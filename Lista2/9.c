//9. Receber o salário de um trabalhador e o 
//valor da prestação de um empréstimo, se a prestação 
//for maior que 20% do salário imprima: “Empréstimo não
//concedido”, caso contrario imprima: “Empréstimo Concedido”
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
    printf("Digite a quantidade de prestaçoes\n");
    scanf("%d", &prest);
    simnao();
    return 0;

    
    
    
}
