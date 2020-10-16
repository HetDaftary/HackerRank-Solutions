// The program given in the Hackerrank was failing in one case and thus I wrote a new one. 
#include <stdio.h>

void print_reverse(int* arr, int n) {
    n--;
    for(int i  = n; i > -1; i--)
        printf("%d ", arr[i]);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }

    print_reverse(arr, n);

    return 0;
}