#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool goodYear(long long int x){
    vector<long long int> cnt(10,0);
    while(x>0){
        cnt[x%10]++;
        if(cnt[x%10]>1)//Checking frequency of the last digit
        {
            return false;
        }
        x/=10;//Looping through each digit
    }
    return true;
}
int main()
{
    long long int x;
    cin>>x;
    x++;
    while(!goodYear(x)){
        x++;
    }
    cout<<x<<"\n";
    
    return 0;
}