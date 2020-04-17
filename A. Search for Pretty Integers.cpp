#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int list1[n],list2[m];
    for(int i=0; i<n; i++)
    {
        cin>>list1[i];
    }
    for(int i=0; i<m; i++)
    {
        cin>>list2[i];
    }

    sort(list1,list1+n);
    sort(list2,list2+m);

    for(int i=0; i<n; i++)
    {
        if(binary_search(list2,list2+m,list1[i]))
        {
            cout<<list1[i]<<endl;
            return 0;
        }
    }
    if(list1[0]>list2[0])
        cout<<list2[0]<<list1[0]<<endl;
    else
        cout<<list1[0]<<list2[0]<<endl;


}
