#include<iostream>

using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    int n1,n2=0;

    n1=(n/2)*m;
    if(n%2!=0)
        n2=m/2;

    cout<<n1+n2<<endl;
}
