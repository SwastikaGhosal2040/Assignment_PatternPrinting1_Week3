/*
Print the following pattern
Input : n = 4
Output :
      A
    A B
  A B C
A B C D
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter row no : ";
    cin>>n;
    //rows
    for(int i=1;i<=n;i++)
    {
      //spaces
      for(int j=1;j<=n-i;j++)
      {
        cout<<" "<<"  ";
      }
      //ABCD........
      for(int k=1;k<=i;k++)
      {
        cout<<char(k+64)<<"  ";
      }
      cout<<endl;
    }
}