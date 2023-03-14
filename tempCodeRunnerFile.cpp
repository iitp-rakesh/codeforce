#include <iostream>
#include <algorithm>

using namespace std;

long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long lcm(long long a, long long b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long A, B;
        cin >> A >> B;

        long long minVal = 10e9 + 1;
        long long g = gcd(A, B);

        for (long long X = g; X <= min(A, B); X += g)
        {
            minVal = min(minVal, lcm(A, X) - gcd(B, X));
        }

        cout << minVal << endl;
    }
    return 0;
}
