#include<bits/stdc++.h>

using namespace std;

int main()
{
    int ara[3];
    cin>>ara[0]>>ara[1]>>ara[2];
    sort(ara,ara+3);
    int sum=ara[0]+ara[1];
    if(ara[0]+ara[1]<ara[2])
        sum+=ara[0]+ara[1];
    else
        sum+=ara[2];
    cout<<sum<<endl;
}
