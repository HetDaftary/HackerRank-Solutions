#include <iostream>
#include <string>
using namespace std;

int main() {   
    int a,b;
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    a=s1.length();
    b=s2.length();
    cout << a << " " << b << endl;
    cout << (s1+s2) << endl;
    cout << s2[0]+s1.substr(1,a-1) << " " << s1[0]+s2.substr(1,b-1);
    return 0;
}


