#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char number_to_arrays[10][10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int main() {
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.

    for (int i = a; i <= b; i++) {
        if (i < 10) printf("%s\n", number_to_arrays[i]);
        else printf((i % 2) ? "odd\n": "even\n");
    }


    return 0;
}


