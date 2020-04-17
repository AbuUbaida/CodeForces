#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int ara[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
        sum+=ara[i];
    }
    sort(ara,ara+n,greater<int>());
    int temp=0;
    int i=0;
    while(i<n)
    {
        temp+=ara[i];
        if(temp>sum-temp)
            break;
        i++;
    }
    cout<<i+1<<endl;
}
