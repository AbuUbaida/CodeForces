#include<iostream>

using namespace std;

int main()
{
    int x,y,z;
    cin>>x>>y>>z;

    if(y<x)
    {
        if(y+z>=x)
        {
            cout<<"?"<<endl;
        }
        else
        {
            cout<<"+"<<endl;
        }
    }
    else if(x<y)
    {
        if(x+z>=y)
        {
            cout<<"?"<<endl;
        }
        else
        {
            cout<<"-"<<endl;
        }
    }
    else if(x==y)
    {
        if(z==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
             cout<<"?"<<endl;
        }
    }
}
