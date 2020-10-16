#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_prime(int n) {
    if (n < 2) return false;
    int sqr = sqrt(n);
    for(int i=2; i<= sqr; i++)
        if(n % i == 0) 
            return false;
    return true;
}

int main() {
    int number_of_test_cases, temp;
    scanf("%d", &number_of_test_cases);

    for (int i = 0; i < number_of_test_cases; i++) {
        scanf("%d", &temp);
        if (is_prime(temp)) printf("Prime\n");
        else printf("Not prime\n");
    }
       
    return 0;
}
