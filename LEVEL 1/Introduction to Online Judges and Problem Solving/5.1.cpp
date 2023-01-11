#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;


// void solve(){
//     long long int a,b;
//     cin>>a>>b;
//     long long int value1=max(a,2*b);
//     long long int value2=max(2*a,b);
//     long long int value3=max(a+b,b);//Important
//     long long int mini=Min(value1,value2,value3);
//     cout<<mini*mini<<endl;
// }
// int main()
// {
//     int t=1;
//     cin>>t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(2*min(a,b)<max(a,b)){
            cout<<pow(max(a,b),2)<<endl;
        }
        else{
            cout<<pow(2*min(a,b),2)<<endl;
        }
    }
}