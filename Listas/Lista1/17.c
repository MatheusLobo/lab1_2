//Tendo como dados de entrada a altura e o sexo de uma pessoa, 
//construa um algoritmo que calcule seu peso ideal, utilizando as seguintes f�rmulas:
//Para homens: (72.7*h) - 58
//Para mulheres: (62.1*h) - 44.7 (h = altura)
//Pe�a o peso da pessoa e informe se ela est� dentro, acima ou abaixo do peso.
# include <stdio.h>
int main(){
    int s;
    float altura,peso;
    printf("Digite a altura da pessoa e metros = ");
    scanf("%f", altura);
    printf("Digite 1 para homem\n");
    printf("Digite 2 para mulher \n");
    if (s=1){
    peso=(72.7*altura) - 58;
    printf("O peso ideal � = %f", peso);
    scanf("%f", altura);
}else if (s=2){     
    peso=(62.1*altura) - 44.7;
    printf("O peso ideal � = %f", peso);
    scanf("%f", altura);
} else
 printf("Nao foi digitado 1 ou 2");
 return 0;
}
