#include<stdio.h>
//Comparando uma tabela
//Ele primeiro le o valor da variavel x e depois incrementa na 3º linha do codigo com isso e necessario colocar  o ++ para icremetnar antes.
int main()
{ 
int x,y,z;
x=y=10;
printf("\n%d %d %d", x, y, z);
z=(x++);
printf("\n%d %d %d", x, y, z);
x= -x;
printf("\n%d %d %d", x, y, z);
y++;
printf("\n%d %d %d", x, y, z);
x=x+y-(z--);
printf("\n%d %d %d", x, y, z);
scanf("%d", x);
return 0;
}
