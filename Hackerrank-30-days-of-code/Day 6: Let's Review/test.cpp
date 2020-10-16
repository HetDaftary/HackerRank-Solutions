#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    string things[n];
    
    for (int i = 0; i < n; i++)
        cin >> things[i];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < things[i].length(); j = j + 2) 
            cout << things[i].at(j);
        cout << " ";
        for (int j = 1; j < things[i].length(); j = j + 2)
            cout << things[i].at(j);
        
        cout << endl;
    }
    return 0;
}