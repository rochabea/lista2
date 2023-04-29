#include <stdio.h>
#include <stdlib.h>

int main(){
int i, soma_tres = 0,r1,soma_cinco=0,r2,soma;

//um for para identificar os multiplos de 3 entre os números naturais 
     for ( i = 0; i < 1000; i++)
     { 
        r1 = i*3;
        printf("\nNumero multiplo de 3: %d", r1);
        //apos identificar os numeros multiplos correspondentes, executado uma soma com todos os numeros que exercem a condição
        soma_tres = soma_tres+r1;
        }
//um for para identificar os multiplos de 3 entre os números naturais         
      for ( i = 0; i < 1000; i++)
     { 
         r2 = i*5;
         printf("\nNumero multiplo de 5: %d", r2);
//apos identificar os numeros multiplos correspondentes, executado uma soma com todos os numeros que exercem a condição
        soma_cinco = soma_cinco+r2;
     }
//quantidade de numeros que são multiplos de 3 e de 5
     soma = soma_tres + soma_cinco;

printf("\nSoma dos multiplos de 3:%d",soma_tres);
printf("\nSoma dos multiplos de 5 :%d",soma_cinco);
printf("\nSoma dos valores multiplos de 3 e de 5:%d",soma);
  
}