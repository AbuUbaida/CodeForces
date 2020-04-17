#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int ara[n];
    int in;
    for(int i=1;i<=n;i++)
    {
        cin>>in;
        ara[in]=i;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<ara[i]<<" ";
    }
    cout<<endl;
}
