#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //Logic for Composite
    /*
    int n;
    cin>>n;
    int count =0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
           
            if(i!=1 && i!=n){
              count++;
            }
            
        }
    }
    if(count!=0){
        cout<<"Composite"<<endl;
    }else{
        cout<<"Non-Composite"<<endl;
    }
    */
    //Approach to this Problem,Very very Important.
    /*
        -->a*x
        -->(a+1)*x
        -->Difference -->(a+1)*x-a*x=x 
        -->x can be anything
        -->Replace x by n;
        -->a must be a composite number
        =>8,9 =>15,16
        -->9n - 8n=n (a=9n,b=8n)
        -->16n - 15n=n (a=16n,b=15n)
        
    */
    long long int x;
    cin>>x;
    cout<<16*x<<" "<<15*x<<endl;//It can be (9,8) also.
    
    return 0;
  
}