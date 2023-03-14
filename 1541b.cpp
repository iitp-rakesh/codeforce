#include <bits/stdc++.h>
using namespace std;
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
		long long a[n+1];
		for (long long i = 1; i <= n; i++)
		{
			cin >> a[i];
		}
		long long ans = 0;
		for (long long i = 1; i <= n; i++)
		{
			for (long long j = a[i] - i; j <= n; j += a[i])
			{
				if (a[i] * a[j] == i + j && i < j)
				{
					ans++;
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}