#include<iostream>

using namespace std;

int main()
{
    int n,h;
    cin>>n>>h;

    int in,w=0;
    for(int i=0;i<n;i++)
    {
        cin>>in;
        if(in>h)
            w+=2;
        else
            w++;
    }
    cout<<w<<endl;
}
