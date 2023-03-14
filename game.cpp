#include <iostream>
using namespace std;
void asc(long long a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (a[i] < a[j])
            {
                long long t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
}
void remove_last(long long a[], int count)
{
    for (int i = 0; i < count - 1; i++)
    {
    }
}
int main()
{
    int n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    asc(a, n);
    cout<<a[n/2];
    return 0;
}