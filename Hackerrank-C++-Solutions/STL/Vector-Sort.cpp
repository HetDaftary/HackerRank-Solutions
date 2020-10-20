#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int temp,count;
    cin>>count;
    vector<int>v;
    for(int i=0;i<count;i++) {
        cin>>temp;
        v.push_back(temp);
    }
    
    sort(v.begin(),v.end());
    for(int i=0;i<count;i++)
        cout<<v[i]<<" ";
    return 0;
}

