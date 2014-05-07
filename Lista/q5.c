//Escreva um programa que leia duas strings e as coloque na tela.
//Imprima também a segunda letra de cada string.
#include <stdio.h> 
int main() 
{ 
    char s1[25], s2[25]; 
    printf(" Digite a primeira string: "); 
    gets(s1);
    printf("\n Digite a segunda string: "); 
    gets(s2);
    printf("\n\n As strings lidas sao:\n %s \n %s", s1, s2);
    printf("\n\n A segunda letra da primeira string e': %c", s1[1]); 
    printf("\n A segunda letra da segunda string e': %c ", s2[1]); 
         return 0;
} 
