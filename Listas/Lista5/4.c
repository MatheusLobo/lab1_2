int retorna(){
	int N1,N2;
	scanf("%d",&N1);
	scanf("%d",&N2);
	return(N1,N2);
}
float media(int *N1,int *N2){
		int mediasimples,mediaponderada;
		mediasimples=(N1+N2);
		mediaponderada=(N1+N2*2)/3;
		return(mediasimples,mediaponderada);		
}	
int imprimir(int *N1,int *N2,int *mediasimples,float *mediaponderada){
	printf("Numeros digitados %d e %d ",N1,N2);
	printf("media simples %d ",mediasimples);
		printf("media ponderada %f ",mediaponderada);
}
int main(){
	retorna();		
}
