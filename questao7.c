#include <stdio.h>

int main() {
   int n, primeiro = 0, segundo = 1, proximo, i, indice;

    //solicita que o usuario informe quantos loops ele deseja da sequencia de fibonacci
   printf("Quantos termos da sequencia de Fibonacci voce deseja exibir? ");
   scanf("%d", &n);

   printf("Sequencia de Fibonacci: ");

   //texecuta um for para calcular a sequencia de fibonacci n vezes que o usuario solicitou
   for (i = 1; i <= n; ++i) {
      printf("%d  ", primeiro);
      proximo = primeiro + segundo;
      primeiro = segundo;
      segundo = proximo;
   }

    //solicita que o usuario informe apresenta qual numero esta na posição desejada
   printf("\nDigite o indice do valor que voce deseja visualizar. \nLembrando que o primeiro valor da sequencia corresponde ao indice 0. ");
   scanf("%d", &indice);

   primeiro = 0;
   segundo = 1;

    //executa um for para que o usuario possa informa o indice da posição desejada
   for (i = 1; i <= indice; ++i) {
      proximo = primeiro + segundo;
      primeiro = segundo;
      segundo = proximo;
   }

   printf("O valor correspondente ao indice %d e: %d", indice, primeiro);

    return 0;
}