#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int ara[n][n];
    for(int i=0;i<n;i++)
    {
        ara[i][0]=1;
        ara[0][i]=1;
    }
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            ara[i][j]=ara[i-1][j]+ara[i][j-1];
        }
    }
    cout<<ara[n-1][n-1]<<endl;
}
