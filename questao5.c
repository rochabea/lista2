#include <stdio.h>

int main(){
    int n, i;

    printf("Digite um numero: ");
    scanf("%d", &n);

    //um for em conjunto do if para calcular os divisores do numero informado
    printf("\nSeus divisores são: ");
    for (i = 1; i <= n; i++)
    {
        if(n%i==0)
        printf("\n%d", i);
    }
    return 0;
}