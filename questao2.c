#include <stdio.h>
#include <math.h>

int main()
{
    //declarando as variaveis 
    double x1, x2, y1, y2, dist;

    //pedindo os valores ao usuário
    printf("Insira o valor do primeiro ponto do primeiro plano: ");
    scanf("%lf", &x1);
    printf("\nInsira o valor do primeiro plano do segundo plano: ");
    scanf("%lf", &y1);
    printf("\nInsira o valor do segundo ponto do primeiro plano: ");
    scanf("%lf", &x2);
    printf("\nInsira o valor do segundo ponto do segundo plano: ");
    scanf("%lf", &y2);

    //calculo da area entre os dois planos
    dist = sqrt(pow(x2-x1,2)+pow(y2-y1,2));

    printf("\nO valor da area entre os dois planos e igual a %.4lf\n", dist);
    return 0;
}