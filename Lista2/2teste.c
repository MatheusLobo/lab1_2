//2. Ler um numero e retorne seu antecessor e seu sucessor
#include<stdio.h>
#include<stdlib.h>
int antsuc(){
    int n,ant,suc;
    printf("\nDigite o valor para achar seu sucessor e seu antecessor = ");
    scanf("%d", &n);
    ant=n-1;
    suc=n+1;
    printf("\nAntecessor e o sucessor é respectivamente %d e %d \n", ant, suc);
    return 0;
}
int main(){
    
    int result;
    result=antsuc();
    
system("pause");
    return 0;
}
