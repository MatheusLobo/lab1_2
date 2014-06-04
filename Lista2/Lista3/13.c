#include <stdio.h>
void contagemRegressiva(int N);
int main()
{
    contagemRegressiva(10);
}
void contagemRegressiva(int N)
{
    while(N>=0)
    {
        printf("%d\n",N);
        N--;
    }
    printf("FIM");
}
