//10. Escreva o menu de op��es abaixo, leia a op��o do usu�rio
//e execute a opera��o escolhida Escreva uma mensagem de erro se a 
//op��o escolhida for invalida.
//1- Soma de 2 n�meros.
//2- Diferen�a entre 2 n�meros (maior pelo menor).
//3- Produto entre 2 n�meros.
//4- Divis�o entre 2 n�meros (o denominador n�o pode ser zero).

#include<stdio.h>
#include<stdlib.h>
void soma2(){
     float a,b,soma;
     soma=a+b;
     printf("O resultado � %f", soma);
     }
void dif2(){
     float a,b,dif;
     dif=a-b;
     printf("O resultado � %f", dif);
     }
void prod2(){
     float a,b,prod;
     prod=a*b;
     printf("O resultado � %f", prod);
     }
void div2(){
     float a,b,div;
     div=a/b;
     printf("O resultado � %f", div);
     }    
int main(){
    float a,b;
    int x;
    printf("Digite qual opera�ao deseja realizar\n");
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
                                                                             prod2();} else printf("Opera��o nao listada");
    system("pause");
    return 0;
}
             
