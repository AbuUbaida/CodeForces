#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int c=0;

    for(int s=0;s<n;)
    {
        int dif=n-s;
        if(dif==1)
        {
            s++;
        }
        else if(dif==2)
        {
            s+=2;
        }
        else if(dif==3)
        {
            s+=3;
        }
        else if(dif==4)
        {
            s+=4;
        }
        else
            s+=5;

        c++;
    }
    cout<<c<<endl;
}
