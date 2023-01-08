#include <iostream>
using namespace std;

void solve()
{
    
    //If n/2 is odd,it is not possible,so we have to print "NO",since sum would be dd
    //last odd element ,we can add   addition of n/2
    int n;
    cin>>n;
    if((n/2)%2!=0){
        cout<<"NO";
    }
    else{
        cout<<"YES"<<endl;;
        for(int i=1;i<=n/2;i++){
            cout<<2*i<<' ';//Printing even numbers first
        }
        for(int i=1;i<n/2;i++){
            cout<<2*i-1<<' ';//Printing odd numbers
        }
        cout<<3*(n/2)-1<<'\n';//Very very important,For last odd digit,2*(n/2)-1+(n/2)
    }

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}