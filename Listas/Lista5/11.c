#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void vetor(int qtd,int n,int *vet)
{
    int i,maior=0,k=0; 
    for (i=0;i<qtd;i++)
    {
   	    scanf("%d",&vet[i]); 
    }
    maior=vet[0];
    for (i=0;i<qtd;i++)
    {   
    	if (vet[i]>=maior)
    	{
    		maior=vet[i];
    	}
	}  
    for (i=0;i<qtd;i++)
    {   
    	if (vet[i]==maior)
    	{
    		k++;
    	}
	}   	  
	printf("%d %d",maior,k);
    k=0;
    for (i=0;i<qtd;i++)
    {   
        k++;
        printf("%d ",vet[i]);
    	if (k==n)
    	{
    		printf("\n");
    		k=0;
    	}
	}  		
}
