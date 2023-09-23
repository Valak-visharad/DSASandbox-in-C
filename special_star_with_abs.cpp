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
    int n, i = 0;
    cout<<"n : ";
    cin>>n;
    int space = 2 * n - 2;
    for (int it = 0; it < 2 * n - 1; it++)
    {
        for (int k = 0; k = space - 2 * it; k++)
            cout<<k;
        cout<<"\n";
        int j = 0;
        for(int it2 = 0; it2 < 2 * i - 1; it2++)
        {
            cout<<abs(j) + i;
            if (j == i)
                j = -j;
            j++;
        }
        cout<<"\n";
        if (i == n)
            i = -i;
        i++;
    }
    return 0;
}
