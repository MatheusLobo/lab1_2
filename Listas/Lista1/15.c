//Fa�a um Programa que pe�a 2 n�meros inteiros e um n�mero real. Calcule e mostre:
//o produto do dobro do primeiro com metade do segundo .
//a soma do triplo do primeiro com o terceiro.
//o terceiro elevado ao cubo.
# include <stdio.h>
int main(){
    int n1,n2;
    float n3,A,B,C;
    printf("Digite o valor do numero 1. Ele tem que ser inteiro");
    scanf("%d", n1);
    printf("Digite o valor do numero 2. Ele tem que ser inteiro");
    scanf("%d", n2);
    printf("Digite o valor do numero 3. Ele tem que ser real");
    scanf("%f", n3);
    A=(n1*n1)*(n2/2);
    B=(n1*n1*n1)+n3;
    C=n3*n3*n3;
    printf("O valor de A � = %f", A);
    printf("O valor de B � = %f", B);
    printf("O valor de C � = %f", C);
    scanf("%d", n1);
    return 0;
}
