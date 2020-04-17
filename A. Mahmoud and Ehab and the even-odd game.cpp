#include<iostream>

using namespace std;

int main()
{
    long int n;
    cin>>n;

    int counter=0;
    while(true)
    {
        int a=n;
        if(counter%2==0)
        {
            if(n<=1)
            {
                cout<<"Ehab"<<endl;
                return 0;
            }
            else if(a%2!=0)
            {
                a--;
            }
            n-=a;
        }
        else
        {
            if(n==0)
            {
                cout<<"Mahmoud"<<endl;
                return 0;
            }
            else if(a%2==0)
            {
                a--;
            }
            n-=a;
        }
        counter++;
    }
}
