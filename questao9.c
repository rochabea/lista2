#include <stdio.h>
#include <stdlib.h>

int main(){
    int num,p1,p2,p3,soma=0,i;
printf("Lista de compras. Sera informado quais frutas fornecemos.\n");
printf("Como funciona? Informe o valor do indice informado do item desejado.");
//executado um do para que o usuario tenha acesso as opções da lista 
do
{
     printf("\nEscolha a fruta desejada: \n 1- Maca \n 2- Abacaxi \n 3-Pera \nPara sair digite 0.\n");
    scanf("%d",&num);   
    //o switch case para que o usuário informe quais itens tem interesse para comprar    
    switch (num)
    {
    case 1:
        printf("Maca:R$1,00");
        p1 = 1;
         soma=soma+p1;
        break;
    case 2:
        printf("Abaxi:R$5,00");
        p2 = 5;
        soma=soma+p2;

        break;
    case 3:
        printf("Pera:R$4,00");
        p3 = 4;
        soma=soma+p3;
    default :
        printf("Voce saiu do menu!");
        break;
   }  
//um while para saber quando o while deve parar
} while (num != 0);
     //soma dos valores dos itens selecinados 
     printf("\nValor total = %d",soma);
}