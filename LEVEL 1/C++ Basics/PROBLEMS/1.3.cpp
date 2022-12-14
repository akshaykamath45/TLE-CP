#include<iostream>
using namespace std;

int main(){
    int A,B,C;
    cin>>A>>B>>C;
    int min,mid,max;
    if(A<=B && A<=C){
        min=A;
    }
        if(B<=A && B<=C){
            min=B;
        }
        if(C<=A && C<=B){
            min=C;
        }
        if(B>=A && B<=C){
            mid=B;
            min=A;
            max=C;
        }
        if(B<=A && B>=C){
            mid=B;
            min=C;
            max=A;
        }
        if(A<=B && A>=C){
            min=C;
            mid=A;
            max=B;
        }
        if(A>=B && A<=C){
            min=B;
            mid=A;
            max=C;
        }
        if(C>=B && C<=A){
            min=B;
            mid=C;
            max=A;
        }
        if(C<=B && C>=A){
            min=A;
            mid=C;
            max=B;
        }
        if(A>=B && A>=C){
            max=A;
        }
        if(B>=A && B>=C){
            max=B;
        }
        if(C>=A && C>=B){
            max=C;
        }

    cout<<min<<endl<<mid<<endl<<max<<endl;
    cout<<endl;
    cout<<A<<endl<<B<<endl<<C<<endl;
    return 0;
    
   

}