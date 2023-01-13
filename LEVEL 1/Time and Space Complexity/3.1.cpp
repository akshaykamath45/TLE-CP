#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int mx=-1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mx=max(mx,arr[i]);
    }
    int ans=0;
    for(int i=0;i<n;i++){
         ans=ans+mx-arr[i];
    }
    cout<<ans;
  
}