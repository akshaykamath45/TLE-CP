#include <iostream>
using namespace std;
 
int main()
{
    float a;
    cin>>a;
    int b=a;
    if(a==b){
        cout<<"int "<<b<<"\n";
    }else{
        cout<<"float "<<b<<" "<<a-b<<"\n";
    }
    return 0;
  
}