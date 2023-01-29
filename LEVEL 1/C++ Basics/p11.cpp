#include <iostream>
using namespace std;
 
int main()
{
    long long int n;
    cin>>n;
    long long int sum1=0;
    long long int sum2=0;
    long long int total_sum=0;
    for(long long int i=0;i<=n;i=i+2){
        sum1=sum1+i;
    }
    for(long long int i=1;i<=n;i=i+2){
        sum2=sum2+i;
    }
    total_sum=sum1-sum2;
    cout<<total_sum<<endl;
   
    return 0;
}