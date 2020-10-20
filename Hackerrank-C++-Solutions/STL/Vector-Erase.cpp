#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, temp;
    cin >> n;
    vector<int> vec;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        vec.push_back(temp);
    }

    cin >> temp;    
    if(temp < vec.size())
        vec.erase(vec.begin() + temp - 1);

    int start, end; 
    cin >> start;
    cin >> end;
    start--;
    end--; 

    if(start < end && end < vec.size())
        vec.erase(vec.begin() + start, vec.begin() + end);
    cout << vec.size() << endl;
    for (int i : vec) cout << i << " ";
    cout << endl;

    return 0;
}
