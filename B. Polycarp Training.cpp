#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    set <int> List;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        List.insert(t);
    }

    cout<<List.size()<<endl;
}
