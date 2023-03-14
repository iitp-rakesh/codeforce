#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;

ull getAdd(ull x) {
	ull m1 = 10, m2 = 0;
	while(x > 0) {
		ull y = x % 10;
		x /= 10;
		m1 = min(m1, y);
		m2 = max(m2, y);
	}
	return m1 * m2;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ull a, k;
        cin >> a >> k;
        for (ull i = 1; i < k; i++) {
        	ull add = getAdd(a);
        	if (add == 0) break;
        	a += add;
        }
        cout << a << endl;
    }
    return 0;
}