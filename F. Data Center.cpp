#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int d=n,i;
    for(i=1; i<=d; i++)
    {
        if(n%i==0)
        {
            d=n/i;
        }
    }
    cout<<(d*2)+((i-1)*2)<<endl;
}
