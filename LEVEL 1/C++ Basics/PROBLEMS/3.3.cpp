#include <iostream>
using namespace std;

int main()
{
  int n,i,j;
  cin>>n;
  for( i=0;i<=n;i++){
    for( j=2;j<i;j++){
        if(i%j==0){
            break;
        }
    }
    if(i==j){
        cout<<i<<" ";
    }
  }
  
}
