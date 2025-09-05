#include <stdio.h>
#include <stdlib.h>

// 04) Crie um programa que encontre o maior elemento de um vetor de 10 números inteiros

int maiorElemento (int vetor[], int tamanho) {

    int maiorelemento = vetor[0];

    for (int i = 1; i < tamanho; i++) {

      if (maiorelemento < vetor[i]) {

        maiorelemento = vetor[i];

      }

    }

return maiorelemento;

}



int main(int argc, char *argv[]) {
   
    int maiorelemento;
    int tamanhoV;
    int vetor[10];

    tamanhoV = argc - 1;

    for (int i = 0; i < tamanhoV; i++) {
        vetor[i] = atoi(argv[i + 1]);
    }

   
    maiorelemento = maiorElemento(vetor, tamanhoV);

    
    printf("Maior elemento no vetor = %d", maiorelemento);

    return 0;
}