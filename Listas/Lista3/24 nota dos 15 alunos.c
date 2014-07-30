//nota 15 alunos
#include <stdio.h>
#include <string.h>

int main()
  {
	  int soma,count,num;
	  soma=0;
	  while (count<15){
		  count=count+1;
	  printf("Digite a nota dos alunos %d",count );
	  scanf("%d",&num);
	  soma=num+soma;
	  

  }
  printf("A media das notas dos alunos %d",(soma/15));
  return 0;
}
