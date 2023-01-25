#include<iostream>
using namespace std;
 
int main()
{
    int n,x,y,z,sum1=0,sum2=0,sum3=0;
    cin>>n;
 
    while(n--)
    {
        cin>>x>>y>>z;
        sum1+=x;
        sum2+=y;
        sum3+=z;
    }
     if(sum1==0 && sum2==0 && sum3==0)
        {
            cout<<"YES"<<endl;
        }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}


//My Approach
// #include <iostream>
// using namespace std;

// int main()
// {
//     int t=1;
//     cin>>t;
//     int arr[3];
//     int sum=0;
//     while(t--){
//     for(int i=0;i<3;i++){
//          cin>>arr[i];
//         sum=sum+arr[i];
//         }
//     }
//     if(sum==0){
//         cout<<"YES"<<endl;
//     }
//     else{
//         cout<<"NO"<<endl;
//     }
    
//     return 0;
// }
// 0 2 -2
// 1 -1 3
// -3 0 0