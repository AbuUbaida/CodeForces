#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int ara[n];
    for(int i=0; i<n; i++)
    {
        cin>>ara[i];
    }
    int e=0;
    int o=0;
    for(int i=0; i<n; i++)
    {
        if(ara[i]%2==0)
        {
            e++;
        }
        else
            o++;
    }
    if(e>o)
        cout<<o<<endl;
    else
        cout<<e<<endl;

}
