#include<stdio.h>
#include<math.h>
//definindo um valor único para o Pi que sera utilizado durante o código
#define PI 3.14159

int main(){
    //declarando as variáveis
    double raio, volume, area;

    //solicita que o usuário informe um valor para o raio (variável)
    printf("Insira o valor do raio para calcular a area da superfice e o volume de uma esfera ");
    scanf("%lf", &raio);

    //calcular a área da superfície 
    area = (4.0 * PI * (pow(raio, 2)));
    //calcular o volume de uma esfera
    volume = (4.0 * PI * (pow(raio,3))/3);

    printf("\nO valor da area dessa superfice e igual a %lf", area);
    printf("\nO valor do volume dessa esfera e igual a %lf", volume);

    return 0;
}