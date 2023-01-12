#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a;
    int b;
    int count=0;
    for(int a=0;a<100;a++){
        for(int b=0;b<100;b++)
        if(a*a+b==n && a+b*b==m){
            // cout<<"("<<a<<","<<b<<")"<<endl;
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}

