#include <stdio.h>
#include <stdlib.h>




int maiorElemento(int vetor[], int tamanho) {

    int maiorelemento = vetor[0];

    for (int i = 1; i < tamanho; i++) {

        if (vetor[i] > maiorelemento)  {

            maiorelemento = vetor[i];

        }
    }

    return maiorelemento;
}







int main(int argc, char *argv[]) {


    int vetor[10]; 
    int tamanhoV = argc - 1; 
    int maiorelemento;

    
    for (int i = 0; i < tamanhoV; i++) {
        vetor[i] = atoi(argv[i + 1]);
    }



  
    maiorelemento = maiorElemento(vetor, tamanhoV);


    printf("Maior elemento no vetor = %d", maiorelemento);




    
    return 0;
}