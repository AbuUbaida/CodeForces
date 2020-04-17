#include<bits/stdc++.h>

using namespace std;

typedef struct
{
    int d;
    int no;
}can;

bool comp(can a,can b)
{
    if(a.d!=b.d)
        return a.d>b.d;
    else
        return false;

}

int main()
{
    int n;
    cin>>n;
    can ara[n];
    for(int i=0;i<n;i++)
    {
        cin>>ara[i].d;
        ara[i].no=i+1;
    }
    sort(ara,ara+n,comp);

    long long int c=0;
    for(int i=0;i<n;i++)
    {
        c+=ara[i].d*i+1;
    }
    cout<<c<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<ara[i].no;
        if(i!=n-1)
            cout<<" ";
    }
    cout<<endl;

}
