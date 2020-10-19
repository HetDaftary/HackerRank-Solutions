#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    int n, i, ans = 0;
    scanf("%d", &n);

    int a[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        ans += a[i];
    }

    printf("%d", ans);

    return 0;
}
