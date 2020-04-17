#include<iostream>

using namespace std;

int main()
{
    int q;
    cin>>q;
    long int l1,l2,r1,r2;
    long int a,b;
    while(q!=0)
    {
        cin>>l1>>r1>>l2>>r2;
        if(l1<l2 || l1>l2)
        {
            cout<<l1<<" "<<l2<<endl;
        }
        if(l1==l2)
        {
            cout<<l1<<" "<<l2+1<<endl;
        }
        q--;
    }
}
