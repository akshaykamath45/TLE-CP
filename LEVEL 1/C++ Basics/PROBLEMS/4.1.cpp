

#include <iostream>

using namespace std;

int main()
{
    long long int m,n,a;
    long long answer=0;;
    cin>>m>>n>>a;
    long long horizontal=(m+a-1)/a;
    long long vertical=(n+a-1)/a;
    answer=horizontal*vertical;
    cout<<answer;

    return 0;
}
