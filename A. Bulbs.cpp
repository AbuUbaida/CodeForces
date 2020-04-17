#include<iostream>

using namespace std;

int main()
{
    int s,b;
    cin>>s>>b;
    int ara[b+1]={0};
    for(int i=0;i<s;i++)
    {
        int cb;
        cin>>cb;
        for(int j=0;j<cb;j++)
        {
            int bn;
            cin>>bn;
            ara[bn]=1;
        }
    }
    for(int i=1;i<=b;i++)
    {
        if(ara[i]==0)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
}
