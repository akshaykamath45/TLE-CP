#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Find starting day of a task,and the ending day of a task,and find whether there is any other task
//DDBBCCCBBEZ
//i=2
//j=8
//for(c=2 to 8){
//    if(s[c]!='B'){
//       cout<<"NO"
//  }
//}

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
   for(char c='A';c<='Z';c++){
       int first_occur=INT_MAX;//important
       int last_occur=INT_MIN;//important
       for(int j=0;j<n;j++){
           if(s[j]==c){
               first_occur=min(first_occur,j);//left most index
               last_occur=max(last_occur,j);//right most index
           }
       }
       for(int j=first_occur;j<=last_occur;j++){
           if(s[j]!=c){
               cout<<"NO"<<'\n';
               return;
           }
       }
   }
   cout<<"YES"<<'\n';
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}