#include<iostream>

using namespace std;

int main()
{
    int boxes,girls;
    cin>>boxes>>girls;

    long int candy;
    int odd=0,even=0;
    int to=0,te=0;
    int gd=0;
    for(int i=1; i<=boxes; i++)
    {
        cin>>candy;

        if(candy%2==0)
        {
            even++;
        }
        else
            odd++;

        if(candy%girls==0)
        {
            gd++;
            if(candy%2==0)
            {
                te++;
            }
            else
                to++;
        }
    }
    int r1=gd/2;
    int sub=gd%2;



}
