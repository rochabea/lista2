#include <stdio.h>

int main(){
    float valor[10], resultado = 0, media;

    for (int i = 0; i < 10; i++)
    {
        printf("Informe o valor: ");
        scanf("%f", &valor[i]);

        //fazendo o calculo aqui dentro pra não ter que na hora de calcular a media inserir os 10 valores
        resultado = resultado + valor[i];
    }
    media = (resultado)/10;

    printf("\nO valor da media dos valores apresentados e igual %.2f", media);

    return 0;
    
}