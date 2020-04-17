#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int c=1;
    int sum=0;
    for(int i=0;i<n-1;i++)
    {
        sum+=c*2;
        c+=2;
    }
    sum+=(n*2)-1;
    cout<<sum<<endl;
}
