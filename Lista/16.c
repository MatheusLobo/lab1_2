//Tendo como dados de entrada a altura de uma pessoa, 
//construa um algoritmo que calcule seu peso ideal, 
//usando a seguinte fórmula: (72.7*altura) - 58
# include <stdio.h>
int main(){
    float altura,peso;
    printf("Digite a altura em metros = ");
    scanf("%f", altura);
    peso=(72.7*altura) - 58;
    printf("O peso ideal é = %f", peso);
    scanf("%f", altura);
    return 0;
}
