#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++)
    {
        ara[i]=0;
        for(int j=0;j<4;j++)
        {
            int m;
            cin>>m;
            ara[i]+=m;
        }
    }
    int pos=1;
    for(int i=1;i<n;i++)
    {
        if(ara[0]<ara[i])
            pos++;
    }
    cout<<pos<<endl;
}
