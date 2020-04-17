#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int input;
    for(int i=0;i<n;i++)
    {
        cin>>input;
        if(input==1)
        {
            cout<<"HARD"<<endl;
            return 0;
        }
    }
    cout<<"EASY"<<endl;
}
