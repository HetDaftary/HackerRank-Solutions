#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int* reverse_array(int n, int* a) {
    int mid = n / 2, for_swap;
    for (int i = 0; i < mid; i++) {
        for_swap = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = for_swap;
    } return a;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;
    int* a = new int[n];

    for (int i = 0; i < n; i++) cin >> a[i];
    a = reverse_array(n, a);
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;

    return 0;
}

