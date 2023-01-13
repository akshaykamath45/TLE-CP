#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--){
        int n,i,j;
        cin>>n;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];//Creating Duplicate Array to Store Sorted Data
        }
        sort(b,b+n);//after sorting,checking element at 2nd index.b[1].
        for(int i=0;i<n;i++){
            if(a[i]!=b[1])
            {
                cout<<i+1<<endl;
            }
        }
        
    
    }
    return 0;
  
}
