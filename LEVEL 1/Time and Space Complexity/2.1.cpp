#include <iostream>

using namespace std;

void solve(){
   long long int M=1e9+7;    
   long long int n;
   cin>>n;
   n=n%M;
   long long int ans=n*n%M;
   cout<<ans<<endl;
}
int main()
{
   int t=1;
   cin>>t;
   while(t--){
       solve();
   }
 
   
    return 0;
}
