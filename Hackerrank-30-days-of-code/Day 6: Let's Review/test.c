#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define limit 10000

int main() {

    int total, len; 
    scanf("%d", &total);
    char s[limit];

    for(int i = 0; i < total; i++) {
        scanf("%s", s);
        len =  strlen(s);
        for(int i = 0; i < len; i += 2) {
            printf("%c", s[i]);
        } printf(" ");
        for(int i = 1; i < len; i += 2) {
            printf("%c", s[i]);
        } printf("\n");
    }
    return 0;
}
