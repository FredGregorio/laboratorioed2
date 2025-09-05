#include <stdio.h>
#include <stdlib.h> // Para usar a função atoi

// Fazer uma soma de 2 números e imprimir

int main(int argc, char *argv[]) {
  
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    
    int soma = a + b;

  
    printf("gcc -o q02 q02.c%d + %d = %d\n", a, b, soma);

    return 0;
}