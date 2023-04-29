#include <stdio.h>

int main(void){
    int n, menor, maior;
    //solicita que o usuario informe os valores
    printf("Iremos realizar uma analise de qual e o menor e qual e o maior valor informado, sendo aceito somente um positivo. \nPara sair da soma informe um valor negativo");
    printf("\nDigite um numero: ");
    scanf("%d", &n);

    menor = maior = n; 
    //um while sera executado para armazenar os valores positivos
    while (n >= 0)
    {
        printf("\nDigite um numero: ");
        scanf("%d", &n);
        //um if para identificar qual foi o menor e maior valor informado pelo usuário durante o while
        if (n < menor && n >= 0)
            menor = n;
        if (n > maior)
            maior = n;        
    }
    printf("\nMenor numero = %d", menor);
    printf("\nMaior numero = %d", maior);
    return 0;
}