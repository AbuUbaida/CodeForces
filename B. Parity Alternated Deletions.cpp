#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int ara[n];
    int odd=0,even=0;
    for(int i=0; i<n; i++)
    {
        cin>>ara[i];
        if(ara[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    int sum=0;
    if(fabs(even-odd)<=1)
    {
        cout<<0<<endl;
        return 0;
    }
    else
    {
        sort(ara,ara+n);
        int c=0;
        if(even>odd)
        {
            for(int i=0; c<=(n-odd*2+1); i++)
            {
                if(ara[i]%2==0)
                {
                    sum+=ara[i];
                    c++;
                }
            }
        }
        else
        {
            for(int i=0; c<=(n-even*2+1); i++)
            {
                if(ara[i]%2!=0)
                {
                    sum+=ara[i];
                    c++;
                }
            }
        }
    }
    cout<<sum<<endl;
}

