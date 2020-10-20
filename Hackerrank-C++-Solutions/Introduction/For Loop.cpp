#include <iostream>
#include <cstdio>
using namespace std;

static const string ans[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int main() {
    // Complete the code.
    int a, b;
    cin >> a;
    cin >> b;
    b++;

    for (int i = a; i < b; i++) {
        if (i > 9) {
            cout << ((i % 2) ? "odd" : "even") << endl;
        } else {
            cout << ans[i] << endl;
        }
    }

    return 0;
}
