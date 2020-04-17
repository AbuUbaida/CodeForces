#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int ara[4];
    cin>>ara[0]>>ara[1]>>ara[2]>>ara[3];
    sort(ara,ara+4);
    int a=ara[3]-ara[0];
    int b=ara[1]-a;
    int c=ara[2]-a;

    cout<<a<<" "<<b<<" "<<c<<endl;
}
