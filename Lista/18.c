//Jo�o Papo-de-Pescador, homem de bem, comprou um microcomputador para
// controlar o rendimento di�rio de seu trabalho. Toda vez que ele traz um peso de
// peixes maior que o estabelecido pelo regulamento de pesca do estado de S�o Paulo (50 quilos)
// deve pagar uma multa de R$ 4,00 por quilo excedente. Jo�o precisa que voc� fa�a um programa que leia
// a vari�vel peso (peso de peixes) e verifique se h� excesso. Se houver, gravar na vari�vel excesso e na
// vari�vel multa o valor da multa que Jo�o dever� pagar.
// Caso contr�rio mostrar tais vari�veis com o conte�do ZERO.
# include <stdio.h>
int main(){
    float excedente,multa,peso,peso1;
    printf("Digitar peso da pesca");
    scanf("%f", &peso);
    peso1=peso-50;
    if (peso1<=0){
                                      printf("Nao ouve excedente\n");
                                      printf("Nao ouve multa\n");
                                      excedente=0;
                                      multa=0;
                                      printf("Nao ouve excedente %f", excedente,"Kg\n");
                                      printf("Nao ouve multa %f", multa,"reais\n");
                                      scanf("%d", &peso);
                                      } else if(peso>=1){
                 excedente=peso-50;
                 multa=excedente*4;
                 printf("Teve exedente de %f", excedente,"Kg\n");
                 printf("Multa de %f", multa,"reais\n");
                 scanf("%d", &peso);
                 }
    return 0;
}
