#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int N;
    cin>>N;
    int arr[51];
    arr[1]=0;
    arr[2]=1;
    for(long long int i=3;i<=50;i++){
        arr[i]=arr[i-1]+arr[i-2];
       
    }
     cout<<arr[N];
    
    return 0;
    
    
}