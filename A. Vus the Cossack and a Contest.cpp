#include<iostream>
#include<algorithm>

using namespace std;

int main()

{
    int x,y,z;
    cin>>x>>y>>z;
    int temp=min(y,z);
    if(temp>=x)
    {
        cout<<"Yes"<<endl;
    }
    else
        cout<<"No"<<endl;
}
