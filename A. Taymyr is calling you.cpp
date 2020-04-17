#include<iostream>

using namespace std;

int main()

{
    int x,y,n;
    cin>>x>>y>>n;

    int flag=0;
    for(int i=1;i<=n;i++)
    {
        if(i%x==0 && i%y==0)
            flag++;
    }
    cout<<flag<<endl;
}
