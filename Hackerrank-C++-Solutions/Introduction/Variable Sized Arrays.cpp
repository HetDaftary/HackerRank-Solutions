#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int num_of_arr, num_of_tests, len, i, j, x, y;
    cin >> num_of_arr >> num_of_tests;

    int** arr = new int*[num_of_arr];

    for (i = 0; i < num_of_arr; i++) {
        cin >> len;
        arr[i] = new int[len];
        for  (j = 0; j < len; j++) cin >> arr[i][j];
    }

    for (i = 0; i < num_of_tests; i++) {
        cin >> x >> y;
        cout << arr[x][y] << endl;
    } 

    return 0;
}
