#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n2,n3,n5,n6;
    cin>>n2>>n3>>n5>>n6;

    int min256=min(n2,n5);
    min256=min(n6,min256);

    n2-=min256;
    n5-=min256;
    n6-=min256;

    int sum=0;
    sum+=min256*256;

    int min32=min(n3,n2);
    sum+=min32*32;

    cout<<sum<<endl;

}
