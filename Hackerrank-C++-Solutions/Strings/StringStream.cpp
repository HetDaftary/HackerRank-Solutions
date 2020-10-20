#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function.
    // For the C people, we are using algorithm similar to sscanf. 
    
    vector<int> vec;
    stringstream ss(str);

    int temp;
    char ch;

    while (ss >> temp /* While we can read an integer. */) {
        vec.push_back(temp);
        ss >> ch; // Taking the ',' from the string.
    } return vec;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
