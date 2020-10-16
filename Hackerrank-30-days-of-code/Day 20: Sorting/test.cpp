#include <bits/stdc++.h>

using namespace std;

int bubble_sort(int n, int* a) {
    int i, nos = 0, temp, temp_nos, j; 
    for (i = 0; i < n; i++) {
        temp_nos = 0;
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[i]) {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
                temp_nos++;
            }
        } nos += temp_nos;
        if (temp_nos == 0) break;
    } return nos;
}

int main() {
    int n;
    cin >> n;
    int a[n]; // I have used array here has it has there will be no difference and I can use bubble_sort from c. 
    for(int a_i = 0; a_i < n; a_i++){
    	cin >> a[a_i];
    }
    int nos = bubble_sort(n, a);
    
    cout << "Array is sorted in " << nos << " swaps.\n" << "First Element: " << a[0] << "\nLast Element: " << a[n - 1];

    return 0;
}
