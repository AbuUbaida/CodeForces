#include<iostream>

using namespace std;

int main()
{
    long int n;
    int k;
    cin>>n>>k;
    while(k!=0)
    {
        if(n%10==0)
            n=n/10;
        else
            n--;
        k--;
    }
    cout<<n<<endl;
}
