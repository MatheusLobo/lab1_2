#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h> 
int main() {
  int n1,n2,cont;
  int S,M,MAX,MIN,MP,pares1,pares2,pares,contpares2,contpares1,contpares;
  char C;
  cont=0;
  MAX=0;
  MIN=0;
  contpares1=0;
  contpares2=0;
printf("Digite oq quer usar");
printf("S - Soma");
printf("QT - Quantidade de numeros digitados");
printf("M - Media");
printf("MAX - Maior numero digitado");
printf("MIN - Menor numero digitado");
printf("MP - Media dos numeros pares");
scanf("%c", &C);
printf("Digite os numeros");
scanf("%d",&n1);
scanf("%d",&n2);
cont=cont+2;
M=(n1+n2/2);
if (n1>MAX){
	MAX=n1;};
if (n2>MAX){
	MAX=n2;};
if (n1<MIN){
	MIN=n1;};
if (n2<MIN){
	MIN=n2;};
if (C=='S') {
	S=n1+n2;}
if (C=='QT') {
	printf("A quantidade de numeros digitados foram %d",cont);
}
if (C=='M') { 
printf("A media é %d", M);
}
if (C=='MAX') {
	printf("O maior numero digitado foi %d", MAX);
}
if (C=='MIN') {
	printf("o menor numero foi %d", MIN);
}
if (C=='MP'){
	if ((n1 % 2) == 0)
    {
      pares1=n1+pares1;
	contpares1=contpares1+1;
    }
		if ((n2 % 2) == 0)
    {
      pares2=n2+pares2;
      contpares2=contpares2+1;
    }  
   contpares=contpares1+contpares2;
    pares=(pares1+pares2)/contpares;
	printf("a media dos numeros pares digitados é %d",pares );
}
