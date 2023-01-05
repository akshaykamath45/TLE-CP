#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int r,c;
   cin>>r>>c;
   int dist=max(abs(r-8),abs(c-8));
   if(dist%2){
       cout<<"black";
   }
   else{
       cout<<"white";
   }
   cout<<endl;
}
