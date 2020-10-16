#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int compare_tuples(int* a, int* b, int len) {
    for (int i = 0; i < len; i++)  {
        if (a[i] < b[i]) return 1;
        else if (a[i] == b[i]);
        else return -1;
    } return 0;
}

int main() {
    int a[3], b[3];
    
    scanf("%d %d %d", &a[2], &a[1], &a[0]);
    scanf("%d %d %d", &b[2], &b[1], &b[0]);

    if (compare_tuples(a, b, 3) >= 0) printf("0");
    else if (compare_tuples(a, b, 2) >= 0) printf("%d", 15 * (a[2] - b[2]));
    else if (a[0] == b[0]) printf("%d", 500 * (a[1] - b[1]));
    else printf("10000");

    return 0;
}

