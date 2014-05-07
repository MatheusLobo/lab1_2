//Faça um programa que peça o tamanho de um arquivo para download (em MB)
//e a velocidade de um link de Internet (em Mbps), calcule e informe o tempo 
//aproximado de download do arquivo usando este link (em minutos).
# include <stdio.h>
int main(){
    float tamanho,velocidade,conta;
    printf("Digite o tamanho do arquivo para download em MB");
    scanf("%f", &tamanho);
    printf("Qual a velocidade do link em Mbps");
    scanf("%f",&velocidade);
    conta=tamanho/velocidade;
    printf("O tempo em minutos é = %f", conta);
    scanf("%f",&velocidade);
    return 0;
}
