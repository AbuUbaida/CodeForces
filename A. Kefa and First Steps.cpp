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
    int m=1,c=1;
    for(int i=0; i<n-1; i++)
    {
        if(ara[i]<=ara[i+1])
        {
            c++;
            if(i==n-2 && m<c)
                m=c;
        }
        else
        {
            if(m<c)
                m=c;
            c=1;
        }
    }
    cout<<m<<endl;
}


