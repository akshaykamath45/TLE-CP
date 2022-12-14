#include<iostream>
using namespace std;

int main(){
    int i,N;
    cin>>N;
    int a[N];
    int e=0,o=0,p=0,n=0;
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    for(int i=0;i<N;i++){
        if(a[i]%2==0){
            e++;
          
        }
        if(a[i]%2!=0){
            o++;
           
        }
        if(a[i]>0){
            p++;
           
        }
        if(a[i]<0){
            n++;
           
        }
    }
    cout<<"Even: "<<e<<endl;
    cout<<"Odd: "<<o<<endl;
    cout<<"Postive: "<<p<<endl;
    cout<<"Negative: "<<n<<endl;
    

    return 0;
}