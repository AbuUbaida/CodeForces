#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int ara[n];
    int f,b=0,c=0,l=0;
    for(int i=0; i<n; i++)
    {
        cin>>ara[i];
        if(b==0 && ara[i]==0)
        {
            b=i+1;
        }
        if(ara[i]==0)
        {
            if(l<c)
            {
                l=c;
            }
            f=1;
            c=0;
            continue;
        }
        c++;
        f=0;
    }
    if(f==0 && l<(b+c-1))
    {
        l=(b+c-1);
    }
    cout<<l<<endl;
}
