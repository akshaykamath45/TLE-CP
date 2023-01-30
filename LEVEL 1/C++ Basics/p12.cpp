#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s[n];
    int count=0;
    for(int i=0;i<n;i++){
        cin>>s[i];
        if(s[i]=="Tetrahedron"){
            count=count+4;
        }
        else if(s[i]=="Cube"){
             count=count+6;
        }
        else if(s[i]=="Octahedron"){
             count=count+8;
        }
        else if(s[i]=="Dodecahedron"){
             count=count+12;
        }
        else if(s[i]=="Icosahedron"){
             count=count+20;
        }
    }
    cout<<count<<endl;
}