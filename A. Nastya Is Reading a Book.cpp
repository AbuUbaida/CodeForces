#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int f[n],l[n];

    for(int i=0;i<n;i++)
    {
        cin>>f[i]>>l[i];
    }
    int k;
    cin>>k;

    int counter=0;
    for(int i=0;i<n;i++)
    {
        if(k<=l[i])
            break;
        counter++;
    }
    cout<<n-counter<<endl;

}
