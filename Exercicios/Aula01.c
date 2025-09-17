#include <stdio.h>
#include <stdlib.h>

int fib (int);

int fib (int n) {
    if (n < 2) {
        return 1;
    }
    return fib(n-1) + fib(n-2);

}

int main (int argc, char *argv[]) {
    
    
    
    int n = 4;
    int r = fib(atoi(argv[1]));

    printf("Seu valor é: %d", r);
    

    return 0;
}
