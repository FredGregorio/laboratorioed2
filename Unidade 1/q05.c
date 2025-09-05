#include <stdio.h>
#include <stdlib.h>


// 05) Implemente um programa que inverta um vetor de 10 números inteiros.


void inverterVetor(int vetor[], int tamanho) {


    for (int i = 0; i < tamanho / 2; i++) {

        int temp = vetor[i];
        vetor[i] = vetor[tamanho - i - 1];
        vetor[tamanho - i - 1] = temp;


    }
}

int main(int argc, char *argv[]) {


    int vetor[10]; 
    int tamanhoV = argc - 1; 

   
    for (int i = 0; i < tamanhoV; i++) {

        vetor[i] = atoi(argv[i + 1]);
    }


 
    inverterVetor(vetor, tamanhoV);

 
    printf("Vetor invertido:\n");
    for (int i = 0; i < tamanhoV; i++) {

        printf("%d ", vetor[i]);

    }

    printf("\n");

    return 0;
}