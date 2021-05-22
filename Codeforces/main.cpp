#include <bits/stdc++.h>
using namespace std;

#define ll              long long int
#define mod             1000000007
#define pi              3.141592653589793238
#define lcm(a,b)        (a/(__gcd(a,b)))*b
#define FASTIO          ios_base::sync_with_stdio(false);cin.tie(NULL);cout<<fixed;cout.precision(10);


int main() {
    FASTIO
   int t;
    cin >> t;
    while(t--){
        ll n, c;
        cin >> n >> c;
        ll arr[n];
        for(ll &i : arr){
            cin >> i;
        }
        sort(arr, arr+n);
        ll low = 0, high = arr[n-1], mid, left, cnt, ans;
        while(low <= high){
            mid = (low + high + 1) / 2;
            cnt = 1;
            left = 0;
            for(ll i = 1; i < n && cnt < c; i++){
                if(arr[i] - arr[left] >= mid){
                    cnt++;
                    left = i;
                }
            }
            if(cnt >= c){
                ans = mid;
                low = mid + 1;
            }
            else high = mid - 1;
        }
        cout << ans << "\n";

    }
    return 0;
}