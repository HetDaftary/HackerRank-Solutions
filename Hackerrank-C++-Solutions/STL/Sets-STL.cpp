#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    set<int>s; //Creates a set of integers.
    int n, x, y;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x >> y;

        if (x == 1) {
            s.insert(y); //Inserts an integer x into the set s.
        } else if (x == 2) {
            s.erase(y); //Erases an integer val from the set s.
        } else {
            if (s.find(y) != s.end()) cout << "Yes\n";
            else cout << "No\n";
        }
    }


    return 0;
}
