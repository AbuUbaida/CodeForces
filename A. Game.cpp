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
    sort(ara,ara+n);

    cout<<ara[(n-1)/2]<<endl;
}
