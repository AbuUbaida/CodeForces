#include<iostream>
#include<algorithm>
#include<stack>

using namespace std;

int main()
{
    int n;
    cin>>n;
    long int ara[n];
    for(int i=1;i<=n;i++)
    {
        cin>>ara[i];
    }
    long int large=ara[n];
    stack<long int> s;
    s.push(0);
    for(int i=n-1;i>=1;i--)
    {
        if(large>=ara[i])
        {
            s.push(large+1-ara[i]);
        }
        else
        {
            large=ara[i];
            s.push(0);
        }
    }
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
}
