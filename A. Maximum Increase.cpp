#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int counter=0,larger=0;

    long int in,inPrev=0;

    for(int i=0;i<n;i++)
    {

        cin>>in;

        if(in>inPrev)
        {
            counter++;
        }
        else
        {
            if(larger<counter)
            {
                larger=counter;
            }
            counter=1;
        }
        inPrev=in;
    }

    if(larger<counter)
        larger=counter;

    cout<<larger<<endl;
}
