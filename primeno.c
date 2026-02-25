#include <stdio.h>

int main() {
    int i, j, isPrime, count = 0;

    for(i = 2; i <= 100; i++) {
        isPrime = 1;   // Assume number is prime

        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                isPrime = 0;   // Not prime
                break;
            }
        }

        if(isPrime == 1) {
            printf("%d ", i);
            count++;
        }
    }

    printf("\nTotal prime numbers between 1 and 100 = %d\n", count);

    return 0;
}
