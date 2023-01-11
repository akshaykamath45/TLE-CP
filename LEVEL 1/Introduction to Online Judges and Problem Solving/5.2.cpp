#include <iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int mcount=0,ccount=0;
  for(int i=0;i<n;i++){
      int m,c;
      cin>>m>>c;
      if(m>c){
          mcount++;
      }
      else if(c>m){
          ccount++;
      }
  }
  if(mcount>ccount){
      cout<<"Mishka"<<endl;
  }
  else if(ccount>mcount){
      cout<<"Chris"<<endl;
  }
  else if(mcount==ccount){
      cout<<"Friendship is magic!^^"<<endl;
  }
}