#include <iostream>
using namespace std;

int main()
{
    int n,i,j;
    string s;
    cin>>n>>s;
    int counta=0,countd=0;
    for(i=0;i<n;i++){
        if(s[i]=='A'){
            counta++;
        }
        else if(s[i]=='D'){
            countd++;
        }
    }
    if(counta>countd){
        cout<<"Anton";
    }
    else if(countd>counta){
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }
    return 0;
  
}
