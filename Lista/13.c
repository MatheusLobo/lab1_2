//Fa�a um Programa que pe�a a temperatura em graus Farenheit, transforme e mostre a temperatura em graus Celsius.
# include <stdio.h>
int main(){
    float CX,FX,TX;
    printf("Digite o a temp em farenheit");
    scanf("%f", &FX);
    CX = (5 * (FX-32) / 9);
    printf("O valor da temperatura em celsius � = %f", CX);
        scanf("%f", &FX);
    return 0;
}
    
