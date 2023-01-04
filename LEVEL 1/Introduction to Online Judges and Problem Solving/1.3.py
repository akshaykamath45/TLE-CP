a = input()
b = input()
a = a.lower()
b = b.lower()
if a == b:
    print("0")
elif a > b:
    print('1')
elif a < b:
    print('-1')

# C++ Approach
# #include<bits/stdc++.h>
# using namespace std;
# int main(){
#    string s1,s2;
#    cin>>s1>>s2;
#    int n=s1.size();
#    for(int i=0;i<n;i++){
#        int a1;
#        if(s1[i]>='a'&& s1[i]<='z'){
           #Lowercase
#            a1=s1[i]-'a';
#        }
#        else{
            #Uppercase
#            a1=s1[i]-'A';
#        }
#          int a2;
#         if(s2[i]>='a'&& s2[i]<='z'){
#          ;
#            a2=s2[i]-'a';
#        }
#        else{
#            a2=s2[i]-'A';
#        }
#        if(a1<a2){
#            cout<<-1<<endl;
          
           
#        }
#        else if(a2<a1){
#            cout<<1<<endl;
#            return;
          
#        }
#        else if(a1==a2){
#            cout<<0<<endl;
#            return;
          
#        }
#    }
# }
