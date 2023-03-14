#include <iostream>
using namespace std;
void fibo(int a[], int n)
{
    int i;
    a[0] = a[1] = 1;
    for (i = 2; i < n; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n+1];
    fibo(a, n+1);
    char abc[n];
    for (int i = 0; i < n; i++)
    { bool pre=false;
        for (int j = 0; j <= n+3; j++)
        {
            if ((i + 1) == a[j])
            {
                pre=true;
        
            }
        }
        if (pre)
        {
            abc[i] = 'O';
        }
        else
        {
            abc[i] ='o';
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << abc[i];
    }
    return 0;
}