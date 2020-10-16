#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int to_get_int;
    double to_get_double;
    string to_get_string;
    
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    cin >> to_get_int >> to_get_double >> to_get_string;
    
    // Print the sum.
    cout << to_get_int + i << "\n" << to_get_double + d << "\n" << s + to_get_string << endl;
    
    return 0;
