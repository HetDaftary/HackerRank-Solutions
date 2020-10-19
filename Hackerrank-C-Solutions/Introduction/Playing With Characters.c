#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    size_t size = 1000;
    char a;
    char b[100];
    char c[1000];

    scanf("%c%*c", &a);
    scanf("%s%*c", &b);
    scanf("%[^\n]%*c", &c);

    printf("%c\n%s\n%s", a, b, c);

    return 0;
}
