#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k;
    cin>>k;
    int ara[k];
    int p=0,n=0;
    for(int i=0;i<k;i++)
    {
        cin>>ara[i];
        if(ara[i]<0)
            n+=ara[i];
        else
            p+=ara[i];
    }
    cout<<p-n<<endl;
}
