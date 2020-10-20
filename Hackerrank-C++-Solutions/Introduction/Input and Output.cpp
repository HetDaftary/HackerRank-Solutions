#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a, ans = 0;
    for (int i = 0; i < 3; i++) {
        cin >> a;
        ans += a;
    } cout << ans << endl;
    return 0;
}

