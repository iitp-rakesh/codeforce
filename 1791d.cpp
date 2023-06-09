#include <bits/stdc++.h>
using namespace std;
int maxSum(int arr[], int n) 
{ 
	int dp[n]; 
	dp[0] = arr[0]; 
	dp[1] = max(arr[0], arr[1]); 

	for (int i = 2; i < n; i++) 
		dp[i] = max(dp[i - 1], dp[i - 2] + arr[i]); 

	return dp[n - 1]; 
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin >> s;
        set<char>c(s.begin(),s.end());
        cout<<c.size()<<endl;
    }
    return 0;
}