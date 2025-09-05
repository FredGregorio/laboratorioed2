#include <stdio.h>
#include <stdlib.h>


// Crie um programa que encontre o menor elemento de um vetor de 10 números inteiros.


int menorElemento(int vetor[], int tamanho) {

    int menorelemento = vetor[0];

    for (int i = 1; i < tamanho; i++) {

        if (vetor[i] < menorelemento)  {

            menorelemento = vetor[i];

        }
    }

    return menorelemento;
}







int main(int argc, char *argv[]) {


    int vetor[10]; 
    int tamanhoV = argc - 1; 
    int menorelemento;

    
    for (int i = 0; i < tamanhoV; i++) {
        vetor[i] = atoi(argv[i + 1]);
    }



  
    menorelemento = menorElemento(vetor, tamanhoV);


    printf("Menor elemento no vetor = %d", menorelemento);





    return 0;
}
