#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   int arr[n];
   bool alpha=0;//Creating a flag to check
   for(int i=0;i<n;i++){
       
       cin>>arr[i];
       if(arr[i]==1){
           alpha=1;
       }
       
      
   }
    if(alpha==1){
           cout<<"HARD";
       }
       else{
           cout<<"EASY";
       }
    return 0;
}