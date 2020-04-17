#include<iostream>

using namespace std;

int main()
{
    int k,w;
    long int n;
    cin>>k>>n>>w;
    int sum=0;
    for(int i=1;i<=w;i++)
    {
        sum=sum+(i*k);
    }
    long int diff=sum-n;
    if(diff>0)
        cout<<diff<<endl;
    else
        cout<<0<<endl;
}
