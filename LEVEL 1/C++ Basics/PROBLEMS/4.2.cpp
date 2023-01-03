#include<iostream>
using namespace std;

int main(){
    
    long long  n,k;
    cin>>n>>k;
   
    long long odd=(n+1)/2;//To check odd
    long long even=n/2;//To check even
    if(k<=odd){
        cout<<2*k-1;//Logic using AP-Arithmetic Progrression
    }
    else{
        cout<<(k-odd)*2;
    }

    return 0;
}