void troca(int A,int B){
    int aux;
	aux=A;
	A=B;
	B=aux;
	printf("%d\n%d",A,B);		
}
int main(){
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	troca(a,b);
}
