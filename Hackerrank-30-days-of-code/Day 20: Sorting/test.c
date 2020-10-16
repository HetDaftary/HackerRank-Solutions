#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int bubble_sort(int n, int* a) {
    int i, j, nos = 0, temp_nos, temp_swap;
    
    for (i = 0; i < n; i++) {
        temp_nos = 0;
        for(j = i + 1; j < n; j++) {
            if (a[j] < a[i]) {
                temp_swap = a[j];
                a[j] = a[i];
                a[i] = temp_swap;
                temp_nos += 1;
            }
        } nos += temp_nos;
        if (temp_nos == 0) break; 
    }
    return nos;
}

int main() {
    int n; 
    scanf("%d", &n);
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
    	scanf("%d",&a[a_i]);
    }

    int nos = bubble_sort(n, a);

    printf("Array is sorted in %d swaps.\nFirst Element: %d\nLast Element: %d", nos, a[0], a[n - 1]);    

    return 0;
}
