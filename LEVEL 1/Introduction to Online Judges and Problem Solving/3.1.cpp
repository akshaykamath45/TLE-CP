#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
   string s="atcoder";
   int L,R;
   cin>>L>>R;
    L--;
    R--;
    //   for(int j=s[L];j<=s[R]+1;j++){
    //       cout<<s[j];
    //   }
    cout<<s.substr(L,R-L+1);
   
}