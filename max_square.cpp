#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;

        cin >> m;
       static int a[n][m];
        for (int j = 0; j < m; j++)
        {
            cin >> [i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m - 1; j++)
        {
            if (a[i][j] < a[i][j + 1])
            {
                int t = a[i][j];
                a[i][j] = a[i][j + 1];
                a[i][j + 1] = t;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m - 1; j++)
        {cout<<a[i][j];
        }
        cout<<endl;
    }


    return 0;
}