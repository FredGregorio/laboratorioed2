#include <stdio.h>
#include <stdlib.h>

// Desenvolva um programa que calcule a média de um vetor de 10 números inteiros.

int main(int argc, char *argv[]) {

    int soma = 0; 
    float media;  

    
    for (int i = 1; i < argc; i++) {
        soma += atoi(argv[i]);
    }

    
    media = soma / 10.0;

    
    printf("A media: %.2f\n", media);

    return 0;
}