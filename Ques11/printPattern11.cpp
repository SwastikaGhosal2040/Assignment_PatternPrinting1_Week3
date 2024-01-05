#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter rows:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)//spaces
        {
            cout<<" "<<"  ";
        }
        for(int j=1;j<=i;j++)//stars
        {
            cout<<"*"<<"  ";
        }
        cout<<endl;
    }
    n-=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)//spaces
        {
            cout<<" "<<"  ";
        }
        for(int j=1;j<=n-i+1;j++)//stars
        {
            cout<<"*"<<"  ";
        }
        cout<<endl;
    }
}