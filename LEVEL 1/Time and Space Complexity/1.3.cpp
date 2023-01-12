#include <iostream>
using namespace std;

int main()
{
    //Take String as Input.
    string s;
    cin>>s;
    if(s[0]=='4'){
        cout<<"NO";
    }
    else if(s.size()>=2 && s[0]=='4' && s[1]=='4'){
        cout<<"NO";
    }
    else{
        int n=s.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='4'){
                count++;
            }
            else{
                count=0;
            }
            if(count>=3){
                cout<<"NO";
                return 0;
            }
         
        }
        for(int i=0;i<n;i++){
            if(s[i]!='1' && s[i]!='4'){
                cout<<"NO";
                return 0;
            }
        }
           cout<<"YES";
    
    }
    return 0;
}