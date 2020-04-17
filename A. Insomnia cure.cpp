#include<iostream>

using namespace std;

int main()
{
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int ara[d+1]={0};

    for(int i=1;i<=d;i++)
    {
        if(i%k==0)
            ara[i]=1;
        if(i%l==0)
            ara[i]=1;
        if(i%m==0)
            ara[i]=1;
        if(i%n==0)
            ara[i]=1;
    }

    int counter=0;
    for(int i=1;i<=d;i++)
    {
        if(ara[i]==0)
            counter++;
    }

    cout<<(d-counter)<<endl;
}
