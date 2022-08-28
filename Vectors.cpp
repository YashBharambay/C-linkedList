// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    vector<int> v;
    v.push_back(1);
    v.push_back(5);
    v.push_back(2);
    
    // FIRST METHOD TO PRINT VECTOR
    for(int i=0; i<v.();i++)
    {
        cout<<v.at(i)<<endl;
    }
    
    
    // SECOND METHOD TO PRINT VECTOR
    for(auto elem:v)
    {
        cout<<elem<<endl;
    }


    return 0;
}
