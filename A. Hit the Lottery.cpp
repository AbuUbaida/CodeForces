#include<iostream>

using namespace std;

int main()
{
    long int n;
    cin>>n;

    long int rest=n;
    int i=0;

    while(rest!=0)
    {
        if(rest<5)
        {
            rest=rest-1;
        }
        else if(rest<10)
        {
            rest=rest-5;
        }
        else if(rest<20)
        {
            rest=rest-10;
        }
        else if(rest<100)
        {
            rest=rest-20;
        }
        else
        {
            rest=rest-100;
        }
        i++;
    }

    cout<<i<<endl;
}
