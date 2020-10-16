#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int compare_tuples(int* a, int* b, int len) {
    for (int i = 0; i < len; i++)  {
        if (a[i] < b[i]) return 1;
        else if (a[i] == b[i]);
        else return -1;
    } return 0;
}

int main() {
    int rd, rm, ry, ed, em, ey;

    cin >> rd >> rm >> ry;
    cin >> ed >> em >> ey;

    int a[3] = {ry, rm, rd}, b[3] = {ey, em, ed};

    if (compare_tuples(a, b, 3) >= 0) cout << "0";
    else if (compare_tuples(a, b, 2) >= 0) cout << 15 * (rd - ed);
    else if (ry == ey) cout << 500 * (rm - em);
    else cout << "10000";

    return 0;
}

