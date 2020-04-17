#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=1;j<n-i;j++)
        {
            sum+=(i+1);
        }
        sum++;
    }
    cout<<sum+1<<endl;
}
