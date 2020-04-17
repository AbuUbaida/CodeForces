#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int in,ara[n],group=1;

    cin>>ara[0];
    for(int i=1;i<n;i++)
    {
        cin>>ara[i];
        if(ara[i]!=ara[i-1])
            group++;
    }
    cout<<group<<endl;
}
