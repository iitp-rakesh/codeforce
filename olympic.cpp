#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int chk = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] == a[j])
            {
                chk++;
            }
            sum++;
        }
    }
    cout << chk << " " << sum;
    return 0;
}