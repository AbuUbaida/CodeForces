#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int i=n/3;
    int temp;

    while(i%3==0)
        i++;

    int j,k;

    for(j=(n-i); j>=1; j--)
    {
        if(j%3!=0)
        {
            k=n-(i+j);
            if(k%3!=0)
            {
                cout<<i<<" "<<j<<" "<<k<<endl;
                return 0;
            }
        }

    }
    return 0;
}
