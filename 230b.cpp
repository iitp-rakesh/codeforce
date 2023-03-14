#include <bits/stdc++.h>
using namespace std;
long long fact(const int &p)
{
    if (p <= 1)
        return 1;
    return p * fact(p - 1);
}

// Function to check if the
// number is prime or not
bool isPrime(const long long &p)
{
    if (p == 4)
        return false;

    //  (p - 1) ! ≡  (p-1) mod p
    long long a = fact(p - 1) % p;
    if (a == p - 1)
        return true;
    return false;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long n, x;
        cin >> n;
        if(n==1){
            cout<<"NO";
        }
        else if (ceil((double)sqrt(n)) == floor((double)sqrt(n)))
        {
            if (isPrime(sqrt(n)))
            {
                cout << "YES";
            }
            else
            {
                cout << "NO";
            }
        }
        else
        {
            cout << "NO";
        }
        // cout<<x;
        // if ((sqrt(element)%1==0))
        // {
        //     if(isPrime(sqrt(element)))
        //     cout << "YES";
        // }
        // else
        // {
        //     cout << "NO";
        // }
        cout << endl;
    }
    return 0;
}