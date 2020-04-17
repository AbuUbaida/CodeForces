#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int ara[n];
    int t=0;
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
        if(ara[i]<0)
            t++;
    }
    sort(ara,ara+n);
    int sum=0;
    for(int i=0;i<m && i<t;i++)
    {
        sum+=ara[i];
    }
    cout<<abs(sum)<<endl;
}
