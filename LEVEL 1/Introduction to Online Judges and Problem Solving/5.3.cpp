#include <iostream>
#define ll long long
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n;
    cin>>n;
    for(long long k=2;k<=30;k++){
        long long int y=(1ll<<k)-1;
        if(n%y==0){
            cout<<n/y<<endl;
            return;
        }
    }

    
}
int main(){
    int t=1;
    cin>>t;
    while(t--){
       solve(); 
    }
    return 0;
}
