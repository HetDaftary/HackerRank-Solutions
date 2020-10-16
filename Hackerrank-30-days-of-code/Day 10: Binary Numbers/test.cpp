#include <bits/stdc++.h>
using namespace std;

int get_ans(int n) {
    int max = 0, count = 0, temp, len = sizeof(int)*8; 
    if (n == 0) return 0; // As 0 has no 1's.

    for (int i = 0; i < len; i++) {
        temp = n % 2;
        while (temp) {
            count++;
            i++;
            n = n >> 1;
            temp = n % 2;
        } n = n >> 1; // Shift 1 bit.
        if (max < count) max = count;
        count = 0;
    } return max;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << get_ans(n);
    return 0;
}
