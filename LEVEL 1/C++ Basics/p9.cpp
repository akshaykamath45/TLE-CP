#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string t;
    cin>>t;
    string rev=string(t.rbegin(),t.rend());
    // cout<<rev<<endl<<s<<endl;
    if(rev==s){
        cout<<"YES"<<endl;
    }

    else{
        cout<<"NO"<<endl;
    }
    return 0;
}

//Another Approach using Function of Reverse
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// void reverse(string str)
// {
//     for (int i = str.length() - 1; i >= 0; i--)
//         cout << str[i];
//}
    
