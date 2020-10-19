#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n, ans = 0;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.

    while (n) {
        ans += n % 10; // Getting the last digit.
        n /= 10; // n = n / 10; // Dropping the last digit.
    }

    printf("%d", ans);

    return 0;
}

