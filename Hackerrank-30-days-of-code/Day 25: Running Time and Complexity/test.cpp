#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool is_prime(int n) {
    if (n < 2) return false;
    int sqr = sqrt(n);
    for(int i=2; i<= sqr; i++)
        if(n % i == 0) 
            return false;
    return true;
}

int main() {
    int number_of_test_cases, temp;
    cin >> number_of_test_cases;

    for (int i = 0; i < number_of_test_cases; i++) {
        cin >> temp;
        if (is_prime(temp)) cout << "Prime\n";
        else cout << "Not prime\n";
    }
       
    return 0;
}
