#include<iostream>
using namespace std;

void solve(){
    long long int k;
    cin>>k;
    long long int ind=k*(k-1)/2+1;
    long long int num=2*ind-1;
    long long int ans=0;
    while(k--){
        ans=ans+num;
        num=num+2;
    }
    cout<<ans<<'\n';
}

int main(){
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
