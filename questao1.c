#include <stdio.h>
#include<math.h>
//caldula de acordo com as posições dos valores que serao fornecidos
#define DIFERENCA(p1, p2, p3, p4) (p1 * p2 - p3 * p4)

int main(){
    int A, B, C, D, resultado; 
    //solicite que o usuário informe o valor desejado
    printf("Informe o valor: ");
    scanf("%d", &A);
    printf("\nInforme o valor: ");
    scanf("%d", &B);
    printf("\nInforme o valor: ");
    scanf("%d", &C);
    printf("\nInforme o valor: ");
    scanf("%d", &D);

    //executa o calculo que foi definido anteriormente com os valores fornecidos pelo usuário, executando cada um a posição de acordo com o que foi fornecido
    resultado = DIFERENCA(A, B, C, D);

    printf("\nO valor da DIFERENCA e %d", resultado);

    return 0;   
}