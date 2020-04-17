#include<bits/stdc++.h>

using namespace std;

int main()
{
    long int ara[4];
    cin>>ara[0]>>ara[1]>>ara[2]>>ara[3];

    sort(ara,ara+4);
    int c=0;
    for(int i=0;i<3;i++)
    {
        if(ara[i]==ara[i+1])
            c++;
    }
    cout<<c<<endl;
}
