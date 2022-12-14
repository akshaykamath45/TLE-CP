#include<iostream>
using namespace std;

int main(){
    long long int N,M;
    cin>>N>>M;
    long long int l1=N%10;
    long long int l2=M%10;
    long long int s=l1+l2;
    cout<<s;
    return 0;
}