/*
soma todos os numeros abaixo de 1000 multiplos de 3 e 5
* 
 */
# include <stdio.h>
# include <stdbool.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>

int soma(){
    int e, total = 0;
    for(e=999;e>0;e--){//999 ate 1
        if((e%3 == 0) || (e%5 == 0)){// saber se e multiplo
            total += e;
        }
    }
    return total;
}

int main(){
    printf("A soma dos numeros menores que 1000 multiplos de 3 ou 5 eh: %d\n",soma());
    return 0;
}
