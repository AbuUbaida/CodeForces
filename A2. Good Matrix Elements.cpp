#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int ara[n][n],mat[n][n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>ara[i][j];
            mat[i][j]=0;
        }

    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==(n/2))
                mat[i][j]=1;
            else if(j==(n/2))
                mat[i][j]=1;
            else if(i==j)
                mat[i][j]=1;
            else if((i+j)==(n-1))
                mat[i][j]=1;

        }
    }
    int sum=0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(mat[i][j]==1)
                sum+=ara[i][j];
        }
    }

    cout<<sum<<endl;

}
