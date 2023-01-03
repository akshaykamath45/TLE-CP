#include <iostream>
#include<bits/stdc++.h>
#define all(x) (x).begin(), (x).end()

using namespace std;
//Find the frequency of each element-->Sort the arrays and compare the elements,if same,then yes.
void solve (){
         long long int  n;
         cin >> n;
         vector<long long int > a(n), b(n);
         for (auto &i : a) cin >> i;
         for (auto &i : b) cin >> i;
         sort(all(a));
         sort(all(b));
         if(a == b){
                  cout << "yes\n";
         }
         else cout << "no\n";
}
 int main (){
       
         long long int  t=1;
         // cin >> t;
         while (t--){
                  solve();
         return 0;
    }
}