#include <iostream>
using namespace std;

int highestPowerOf2(int x){
    int res=1;
    while(res<=x){
        res=res*2;
    }
    res/=2;
    return res;
}
int main()
{
   int n;
   cin>>n;
   int bact_required=0;
   while(n!=0){
       bact_required++;
       n=n-highestPowerOf2(n);
   }
   cout<<bact_required<<'\n';

    return 0;
}
// Suppose number of bacterias are 15

// 1->2->4-->8
// Remaining:7

// 1->2--->4
// Remaining:3

// 1--->2
// Remaining:1

// Add 1

// So total:4 Bacterias needed


// On day 1 you will get 2(1*2)
// On day 2 you will get 6((2+1)*2)
// On day 3 you will get 14((6+1)*2)
// On day 4 you will get 15(14+1)