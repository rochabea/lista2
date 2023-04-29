#include <stdio.h>

int main(){
    //declarando as váriaveis do plano
    double x, y;

    printf("Insira as coordenadas: ");
    scanf("%lf %lf", &x, &y);

    //executado um if para informar qual a condição das coordenadas 
    if (x == 0.0 && y == 0.0)
        printf("\nSe encontra na Origem");

    else if(x > 0 && y > 0)
        printf("\nEsta no 1º quadrante");

    else if(x < 0 && y > 0)
        printf("\nEsta no 2º quadrante");

    else if(x < 0 && y < 0)
        printf("\nEsta no 3º quadrante");

    else if( x > 0 && y < 0)
        printf("\nEsta no 4º quadrante");

    else if(x == 0)
        printf("\nSe encontra sobre o Eixo Y");

    else if(y == 0)
        printf("\nSe encontra sobre o Eixo X");

    return 0; 
    
}