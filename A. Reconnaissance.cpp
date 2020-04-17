#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,d;
    cin>>n>>d;
    int ara[n];
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    int c=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(abs(ara[i]-ara[j])<=d)
                c++;
        }
    }
    cout<<2*c<<endl;
}
