//4. Receber o salario de um funcion�rio, calcular 
//e mostrar seu novo sal�rio, sabendo que ele recebeu um aumento de 25%.
#include<stdio.h>
#include<stdlib.h>
float calc(float sal){
      return sal=sal+(sal*0.25);
}
int main(){
    float sal_atual,result;
    printf("\nDigite o valor do salario atual do empregado\n");
    scanf("\n%f\n", &sal_atual);
    result= calc(sal_atual);
    printf("\nO valor do novo salario sera %f\n", result);
    system("pause");
    return 0;
}
    
    
