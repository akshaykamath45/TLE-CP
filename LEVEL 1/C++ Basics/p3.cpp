#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    cin>>n;
    int pi;
    int qi;
    int count=0;
    for(int i=0;i<n;i++){
        cin>>pi>>qi;
        if(pi<=qi-2){
            count++;
        }
    }
    cout<<count;

    return 0;
}