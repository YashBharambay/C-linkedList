
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
   map<int,string> m;
   m.insert({1,"abc"});
   m[3] = "wash";
   m.insert({2 , "yash"});
    
//     FIRST METHOD TO PRINT
   map<int , string> :: iterator it;
   for(it = m.begin() ; it!=m.end() ; it++)
   {
       cout << (*it).first << " "<< (*it).second<<endl;
   }
    
//    SECOND METHOD TO PRINT   (PR is PAIR)
    for(auto pr:m){
    cout << pr.first << " " << pr.second << endl;
    }
}
