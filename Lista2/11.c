#include<stdio.h>
#include<stdlib.h>
void idade1(){
     int idade, tmp_servico;
 	if((idade>=65) || (tmp_servico>=30) || ((idade>=60) && (tmp_servico>=25)))
		printf("Pode se aponsentar\n");
	else
		printf("Nao pode se aposentar\n");
}  
int main (){
	int idade, tmp_servico;
	printf("Informe sua idade e tempo de servico\n");
	scanf("%d %d",&idade, &tmp_servico);
	idade1();
	system("pause");
	
return 0;
}
