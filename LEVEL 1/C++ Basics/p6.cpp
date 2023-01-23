#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int remainder=a%b;
        if(remainder==0){
            cout<<0<<endl;
        } 
        else {
        cout<<b-remainder<<endl;
        }
    }
}

//Approach 2-Gives TLE 
// #include <iostream>
// using namespace std;

// int main()
// {
//     long long int t=1;
//     cin>>t;
//     while(t--)
//     {
//         long long int a,b;
//         cin>>a>>b;
//         long long int count=0;
//         for(long long int i=a;;i++)
//         {
//             if(i%b!=0){
//                 a++;
//                 count++;
//             }    
//             else{
//                 break;
//             }
//         }
//         // if(a<b){
//         //     for(int i=a;i<=b;i++){
//         //          if(i%b!=0){
//         //         a++;
//         //         count++;
//         //     }    
//         //     else{
//         //         break;
//         //     }
//         //     }
//         // }
//         cout<<count<<endl;
//     }

//     return 0;
// }
