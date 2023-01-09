  #include <iostream>
using namespace std;

int main()
{
    int freq[14];//Creating array of size 14
    bool check=0;
    for(int i=0;i<5;i++){
        long long int x;
        cin>>x;//Taking input here
        freq[x]++;
    }
        for(int x=1;x<=13;x++)
        {
            for(int y=1;y<=13;y++){
                if(freq[x]==3 && freq[y]==2){
                    cout<<"YES"<<endl;
                    break;
                }
            }
        }

    
    cout<<"NO"<<endl;
    
}