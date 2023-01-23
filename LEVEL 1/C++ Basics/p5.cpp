#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;
int main(){
    string name;
    cin>>name;
    unordered_set<char> distinct;
    for(char c:name)
      distinct.insert(c);
    if(distinct.size()%2==1) cout<<"IGNORE HIM!";
    else cout<<"CHAT WITH HER!";
}

// username = input()
// distinct_chars = len(set(username))
// if distinct_chars % 2 == 1:
//     print("IGNORE HIM!")
// else:
//     print("CHAT WITH HER!")
