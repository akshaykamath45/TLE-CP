#include <iostream>
#include <bits/stdc++.h>

using namespace std;
long long int ceill(long long int n,long long int x){
    if(n%x){
        return(n/x)+1LL;
    }
    else{
        return n/x;
    }
}
 int main()
{
    long long int t;
    cin>>t;
    while(t--){
    //h-->Character's Health
    //a-->Character's Attack
    //mh-->Monster's Health
    //ma-->Monster's Attack
        long long int h,a,mh,ma;
        cin>>h>>a;//25 //4   
        cin>>mh>>ma;//9 //20
        long long int k,ww,aa;//Required for Upgrades,k-->coins,ww-->amount added to character's attack,aa-->amount added to character's health.
        cin>>k>>ww>>aa;
        bool flag=0;
        for(long long int i=0;i<=k;i++){
            
            long long int new_attack=a+i*ww;
            long long int new_health=h+((k-i)*aa);
            long long int r1=ceill(mh,new_attack);//Y
            long long int r2=ceill(new_health,ma);//X
            if(r1<=r2){
                flag=1;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    //(1-->Monster,2-->Character)
    
    //Afer how many attacks willl monster die ? -->ceil(H1/A2),(Ceil(H2/A1)-->vice-versa)
    
    //Time  Complexity - O(1)
    
    //When will the Character win and When will the moster win ? 
    //After X attacks Monster can kill Character
    //After Y attacks Character can kill Monster.
    
    //Character Win:Y<=X(Character is Attacking the Monster First,Taking the First Turn.)
    
    //Eg:
    //M:H=2,A=1 X=1
    //C:H=1,A=1 Y=2,Since Y>X,Character is Not Winning.
    
    //K Coins: 
    return 0;
}