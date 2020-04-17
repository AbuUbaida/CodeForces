#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int ara[n];
    for(int i=0; i<n; i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+n);

    int counter=1,large=1;
    for(int i=1; i<n; i++)
    {
        if(ara[i]==ara[i-1])
        {
            counter++;
        }
        else
        {
            counter=1;
        }

        large=max(large,counter);
    }
    cout<<large<<endl;
}
