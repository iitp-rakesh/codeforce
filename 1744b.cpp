#include<bits/stdc++.h>
using namespace std;
int CountingEvenOdd(long long arr[], int arr_size)
{
    int even_count = 0;
    int odd_count = 0;
 
    // loop to read all the values in the array
    for (int i = 0; i < arr_size; i++) {
         
          // checking if a number is completely
        // divisible by 2
        if (arr[i] & 1 == 1){
            odd_count++;}
    
    }
    return odd_count;
}
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
int t;cin >> t;
while(t--){
    int n,q;cin >> n >> q;long long a[n];
    long long sum=0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum+=a[i];
    }
    // cout<<sum<<endl;
    int odd_count=CountingEvenOdd(a,n);
    for(int i = 0; i < q; i++){
        long long o,x;
        cin >> o>> x;
        // cout<<odd_count<<" ";
        if(o==1){
            sum+=(odd_count*x);
            if(x%2==1){
                // cout<<x;
                odd_count=0;
            }
        }
        else{
            sum+=((n-odd_count)*x);
            if(x%2==1){
                odd_count=n;
            }
        }

        // if(o==1){
        //     for(int i = 0; i < n; i++){
        //         if(a[i]%2==1){
        //             a[i]+=x;
        //         }
        //         sum+=a[i];
        //     }
        // }
        // else{
        //     for(int i = 0; i < n; i++){
        //         if(a[i]%2==0){
        //             a[i]+=x;
        //         }
        //         sum+=a[i];
        //     }
        // }
        cout<<sum<<endl;
    }
}
return 0;
}