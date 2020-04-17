#include<iostream>

using namespace std;

int main()
{
    int length;
    cin>>length;
    long int ara[length];
    long int largest=0;

    for(int i=0; i<length; i++)
    {
        cin>>ara[i];
        if(ara[i]>largest)
        {
            largest=ara[i];
        }
    }
    int counter=0,tempCount=0;
    for(int i=0;i<length;i++)
    {
        if(ara[i]==largest)
        {
            tempCount++;
            if(tempCount>counter)
                counter=tempCount;
        }
        else
        {
            tempCount=0;
        }

    }
    cout<<counter<<endl;
}
