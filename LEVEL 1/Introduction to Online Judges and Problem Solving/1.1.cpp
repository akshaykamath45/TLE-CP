#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h,w;//h-->Number of Rows,w-->Number of Columns
    cin>>h>>w;
    int arr[h][w];//2-D Array
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<w;i++){
        for(int j=0;j<h;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}