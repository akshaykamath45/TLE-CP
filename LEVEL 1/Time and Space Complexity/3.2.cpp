#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--){
    long long int x,y,n;
    cin>>x>>y>>n;
    long long int k;
    long long int arr[n];
    long long int mx=-1;
    
    for(k=0;k<=n;k++){
        if(k%x==y){
            mx=max(mx,k);
        }
 
    }
    cout<<mx<<endl;
    
    }
    return 0;
  
}