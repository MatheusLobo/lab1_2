#include <stdio.h>

void func(){
     	int chegada_a, chegada_b,partida_a,partida_b,count,t_hora,
      acum=0;
	t_hora = 0;
     if(partida_a<chegada_a)
		t_hora = t_hora + (partida_a + 24) - chegada_a;
	if(partida_b>chegada_b)
		t_hora++;
	for(count=0;count=t_hora;count++){
		if((count=1) || (count=2))
			acum = acum + 1.0;
		else if((count=3) ||(count=4))
			acum = acum + 1.4;
		else if(count>=5)
			acum = acum + 2.0;
	}
	printf("O valor total a ser pago eh: %.2f",acum);
     
     
     }
int main(){
	int chegada_a, chegada_b,partida_a,partida_b;
	printf("Informe a hora de chegada");
	scanf("%d %d",&chegada_a,&chegada_b);
	printf("Informe a hora de partida");
	scanf("%d %d",&partida_a,&partida_b);
              func();
	return(0);	
}
