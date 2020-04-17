#include<iostream>
#include<algorithm>
#include<list>

using namespace std;

int main()
{
    int n;
    cin>>n;
    list <int> l;
    int n1,n2,sum=0;

    for(int i=0;i<n;i++)
    {
        cin>>n1>>n2;
        sum=sum+(n2-n1);
        l.push_front(sum);
    }
    l.sort();
    l.reverse();
    cout<<l.front()<<endl;
}
