
#include <stdio.h>
#include <string.h>

int main()
  {
	  int soma,count,num;
	  soma=0;
	  while (count<10){
		  count=count+1;
	  printf("Digite dez numeros, numero a ser digitado sera %d",count );
	  scanf("%d",&num);
	  soma=num+soma;
	  

  }
  printf("A soma é %d",soma);
  return 0;
}
