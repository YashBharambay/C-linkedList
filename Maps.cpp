In a map when a new value is added it is based on comparison ie. is it big or small then the prev. so if a 


#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
   map<int,string> m;
   m.insert({1,"abc"});                        //O(Log(n))
   m[3] = "wash";
   m.insert({2 , "yash"});
    
//     FIRST METHOD TO PRINT
   map<int , string> :: iterator it;
   for(it = m.begin() ; it!=m.end() ; it++)
   {
       cout << (*it).first << " "<< (*it).second<<endl;                   //O(nlogn)
   }
    
//    SECOND METHOD TO PRINT   (PR is PAIR)
    for(auto pr:m){
    cout << pr.first << " " << pr.second << endl;
    }
    
//    FIND AN ELEMENT  find() passes the iterator.
    auto it = m.find(3);
    if(it==m.end())
    {
        cout << "No Value";
    }else
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    
//   TO DELETE AN ELEMENT
    m.erase(3);      O(logn)
}
