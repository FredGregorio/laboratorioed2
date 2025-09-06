#include <stdio.h>
#include <stdlib.h>
 
//  06) Crie um programa que conte o número de elementos pares em um vetor de 10 números inteiros.


int contadorPares(int vetor[], int tamanho) {


    int contador = 0;

    for (int i = 0; i < tamanho; i++) {


        if (vetor[i] % 2 == 0) {


    
            contador++;

        }


    }



    return contador;
}



int main(int argc, char *argv[]) {


 


    int vetor[10]; 
    int tamanhoV = argc - 1; 

  
    for (int i = 0; i < tamanhoV; i++) {

        vetor[i] = atoi(argv[i + 1]);


    }


    int pares = contarPares(vetor, tamanhoV);



    printf("Número de elementos pares no vetor: %d\n", pares);


    return 0;




}