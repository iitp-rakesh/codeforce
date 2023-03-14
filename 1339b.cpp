#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int i = n / 2;
        int j = 0;
        while (j < n)
        {
            cout << a[i] << " ";
            i = i + int(pow(-1, j + 1) *(j+1));
            j++;
        }
        cout << endl;
    }
    return 0;
}