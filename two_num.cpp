#include <iostream>
using namespace std;
int main()
{
    int n, m, sum;
    bool a1 = true, a2 = true;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum = a[i] + b[j];
            for (int k = 0; k < n; k++)
            {
                if (sum == a[k])
                {
                    a1 = false;
                }
            }
            for (int u = 0; u < m; u++)
            {
                if (sum == b[u])
                {
                    a2 = false;
                }
            }
            if (a1 == true && a2 == true)
            {
                cout << a[i] << " " << b[j];
                cout << endl;
                break;
            }
        }
        if (a1 == true && a2 == true)
        {
            break;
        }
        return 0;
    }