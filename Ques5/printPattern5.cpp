/*
Print the following pattern
Input n = 4
Output:
*
**
***
****
***
**
*
          */
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*"<<"  ";
        }
        cout<<endl;
    }
    int m=n-1;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=m+1-i;j++)
        {
            cout<<"*"<<"  ";
        }
        cout<<endl;
    }
}