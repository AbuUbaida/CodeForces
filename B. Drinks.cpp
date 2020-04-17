#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int n;
    cin>>n;
    double in;
    double sum=0.0;

    for(int i=0;i<n;i++)
    {
        cin>>in;
        sum+=in;
    }
    cout<<fixed<<setprecision(12)<<sum/n<<endl;
}
