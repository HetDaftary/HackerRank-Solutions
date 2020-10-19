#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);

    int len = strlen(s);
    s = realloc(s, len + 1);
    //Write your logic to print the tokens of the sentence here.

    for (int i = 0; i < len; i++) {
        if (s[i] == ' ') printf("\n");
        else printf("%c", s[i]);
    }

    return 0;
}
