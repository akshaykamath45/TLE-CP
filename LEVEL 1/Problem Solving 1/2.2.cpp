#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    long long int count=0;
    vector<int> v(n);
    long long int i;
    for( i=0;i<n;i++){
        cin>>v[i];
    }
    for(i=0;i<n;i++){
    //   do{
    //       i++;
    //       count++;
    //   }while(v[i+1]<=v[i]);
    count=count+max(0,v[i-1]-v[i]);
    v[i]=max(v[i],v[i-1]);
        
    }
    cout<<count<<endl;
    return 0;
}
