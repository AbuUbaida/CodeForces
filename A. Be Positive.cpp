#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int comp;
    comp=(int)ceil(n/2.0);

    int pos=0,neg=0;
    int ara[n];
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
        if(ara[i]>0)
            pos++;
        else if(ara[i]<0)
            neg++;
    }
    if(pos>=comp)
        cout<<1<<endl;
    else if(neg>=comp)
        cout<<-1<<endl;
    else
        cout<<0<<endl;
}
