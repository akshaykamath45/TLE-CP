#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
       vector<int> v(4);
       for(int x=0;x<v.size();x++){
           cin>>v[x];
       }
    //    for(auto &x:v){
    //        cin>>x;
    //    }
       int a=v[0];
       int b=v[1];
       int c=v[2];
       int d=v[3];
      sort(v.begin(),v.end());//Important
       
       if(max(a,b)==v[2] && max(c,d)==v[3]){
           cout<<"YES"<<endl;
       }
       else if(max(a,b)==v[3] && max(c,d)==v[2]){
           cout<<"YES"<<endl;
       }
       else{
           cout<<"NO"<<endl;
       }
   }
    return 0;
}