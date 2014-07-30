#include <stdio.h>
int maior(int V[],int cont){
	int ponteiro=V;
	int i,Maior;
	for (i=0;i<=cont;i++){
		if (ponteiro[i]>Maior)
			Maior=ponteiro[i];
	}
	printf("%d",Maior);
	return 0;
}
int main(){
	int vetor[100],i=0;
	do	{
		scanf("%d",&vetor[i]);
		i=i++;	
	}while(vetor[i]!=0);
	maior(vetor,i);
	return 0;
}
