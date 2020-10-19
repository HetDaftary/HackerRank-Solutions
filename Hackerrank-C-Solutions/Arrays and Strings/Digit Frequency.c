#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    

    char s[1024];
    scanf("%s", s);
    int i, len = strlen(s);

    int digits[10]; // Stores the frequencies of each digit. 
    for(i = 0; i < 10; i++) digits[i] = 0;

    for (i = 0; i < len; i++) if (s[i] > 47 && s[i] < 59) digits[s[i] - 48]++;

    for (i = 0; i < 10; i++) printf("%d ", digits[i]);

    return 0;
}

