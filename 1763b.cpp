#include <bits/stdc++.h>
using namespace std;
vector<long long> primeFactors(long long n)
{
    vector<long long> ans;
    // Print the number of 2s that divide n
    while (n % 2 == 0)
    {
        ans.push_back(2);
        n = n / 2;
    }

    // n must be odd at this point.  So we can skip
    // one element (Note i = i +2)
    for (long long i = 3; i <= sqrt(n); i = i + 2)
    {
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
            ans.push_back(i);
            n = n / i;
        }
    }

    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
    {
        ans.push_back(n);
    }

    return ans;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> v = primeFactors(n);
        set<long long> s(v.begin(), v.end());
        if (v.size() == 0 || v.size() == 1)
        {
            cout << "-1" << endl;
        }
        else if (s.size() > 1)
        {
            cout << "1"
                 << " " << v[0] << " " << n / v[0] << endl;
        }
        else if (s.size() == 1)
        {
            if (n / v[0] == v[0])
            {
                cout << "-1" << endl;
            }
            else
            {
                cout << "1"
                     << " " << v[0] << " " << n / v[0] << endl;
            }
        }
    }
    return 0;
}