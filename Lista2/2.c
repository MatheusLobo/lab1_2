//2. Ler um numero e retorne seu antecessor e seu sucessor
#include<stdio.h>
#include<stdlib.h>
int antsuc(){
    int n,ant,suc;
    printf("Digite o valor para achar seu sucessor e seu antecessor");
    scanf("%d", &n);
    ant=n-1;
    suc=n+1;
    printf("Antecessor e o sucessor é respectivamente %d eh: %d", ant, suc);
    system("pause");
    return 0;
}
int main(){
    int result;
    result=antsuc();
    
system("pause");
    return 0;
}
