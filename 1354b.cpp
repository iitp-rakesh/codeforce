#include <bits/stdc++.h>
using namespace std;
int find_shortest_substring(string s)
{
    int left = 0, right = 0, f = 0;
    int seen[3] = {0}; // keep track of how many times 1, 2 and 3 are seen
    string substring = s;
    while (right < s.length())
    {
        if (s[right] >= '1' && s[right] <= '3')
        {
            seen[s[right] - '1']++; // mark the character as seen
            if (seen[0] && seen[1] && seen[2])
            {f=1;
                while (seen[s[left] - '1'] > 1)
                {
                    seen[s[left] - '1']--;
                    left++;
                }
                if (right - left + 1 < substring.length() && (s[left] == '1' || s[left] == '2' || s[left] == '3'))
                {
                    substring = s.substr(left, right - left + 1);
                }
            }
        }
        right++;
    }
    if (f == 1)
        return substring.size();
    else
        return 0;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << find_shortest_substring(s) << endl;
    }
    return 0;
}