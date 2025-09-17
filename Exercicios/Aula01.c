#include <stdio.h>

int fib (int n) {
    if(n < 0){
        return -1;
    }
    if (n < 2) {
        return 1;
    }
    return fib(n-1) + fib(n-2);

}



int main () {
    
    
    int n = 4;
    int r = fib(n);

    printf("Seu valor é: %d", r);
    

    return 0;
}