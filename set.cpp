// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    set<string>s;
    int n;
    cin >> n;
    for(int i=0;i<n;++i)
    {
        string str;
        cin >> str;
        s.insert(str);        //Log(n)
    }
    
    s.erase("abc");             //log(n)
    cout<<"Find and Erase Worked"<<endl;

    for(auto value:s)
    {
        cout<<value<<endl;
    }
    
    s.find("abc");
    cout<<"Find and Erase Worked"<<endl;
    
}
