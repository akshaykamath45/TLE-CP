#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   long long int n;
   long long int i;
   cin>>n;
   vector <long long int> v(n-1);
   for(i=0;i<n-1;i++){
       cin>>v[i];
   }
   sort(v.begin(),v.end());//sort(all(v))
   
//   for(int i=1;i<=n-1;i++){
//          if(v[i]!=i){
//              cout<<i<<endl;
//              break;
//          }
//   }

  for(int i=0;i<=n-1;i++){
         if(v[i]!=i+1){
             cout<<i+1<<endl;
             break;
         }
  }

    return 0;
}
