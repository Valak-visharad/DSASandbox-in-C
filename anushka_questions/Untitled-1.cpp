/*
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
  1 2 3 4 3 2 1
    1 2 3 2 1
      1 2 1
        1
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"n : ";
    cin>>n;
    int space = 2 * n - 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < space - 2 * i; j++)
            cout<<" ";
        for (int j = 0; j <= i; j++)
            cout<<j + 1<<" ";
        for (int j = 0; j < i; j++)
            cout<<i - j<<" ";
        cout<<"\n";
    }
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 0; j < space - 2 * i; j++)
            cout<<" ";
        for (int j = 0; j <= i; j++)
            cout<<j + 1<<" ";
        for (int j = 0; j < i; j++)
            cout<<i - j<<" ";
        cout<<"\n";
    }
    return 0;
}
