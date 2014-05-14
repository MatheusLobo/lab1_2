//10. Escreva o menu de opções abaixo, leia a opção do usuário
//e execute a operação escolhida Escreva uma mensagem de erro se a 
//opção escolhida for invalida.
//1- Soma de 2 números.
//2- Diferença entre 2 números (maior pelo menor).
//3- Produto entre 2 números.
//4- Divisão entre 2 números (o denominador não pode ser zero).

#include<stdio.h>
#include<stdlib.h>
void soma2(){
     float a,b,soma;
     soma=a+b;
     printf("O resultado é %f", soma);
     }
void dif2(){
     float a,b,dif;
     dif=a-b;
     printf("O resultado é %f", dif);
     }
void prod2(){
     float a,b,prod;
     prod=a*b;
     printf("O resultado é %f", prod);
     }
void div2(){
     float a,b,div;
     div=a/b;
     printf("O resultado é %f", div);
     }    
int main(){
    float a,b;
    int x;
    printf("Digite qual operaçao deseja realizar\n");
    printf(" 1  Para somar\n");
    printf(" 2 para subtrair\n");
    printf(" 3 para dividir\n");
    printf(" 4 para multiplicar\n");
    scanf("%d",&x);
    printf(" Digite o primeiro numero");
    scanf("%f", &a);
    printf(" Digite o segundo numero");
    scanf("%f", &b);
    if (x=1) { 
             soma2();}else if (x=2) {
                                   dif2();}else if (x=3) {
                                                        div2();} else if (x=4) {
                                                                             prod2();} else printf("Operação nao listada");
    system("pause");
    return 0;
}
             
