#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int ara[n];
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+n,greater<int>());
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=ara[0]-ara[i];
    }
    cout<<sum<<endl;
}
