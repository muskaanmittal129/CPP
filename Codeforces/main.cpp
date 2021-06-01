#include <bits/stdc++.h>
using namespace std;

#define ll              long long int
#define mod             1000000007
#define pi              3.141592653589793238
#define lcm(a,b)        (a/(__gcd(a,b)))*b
#define FASTIO          ios_base::sync_with_stdio(false);cin.tie(NULL);cout<<fixed;cout.precision(10);


int main() {
    FASTIO
    ll n;
    cin >> n;
    ll arr[n];
    for(ll &i : arr){
        cin >> i;
    }
    ll ans = 0;
    sort(arr, arr+n);
    for(ll i = 0; i < n; i+=2){
        if(i == n-1){
            if(arr[i] < 0)ans +=  (abs(arr[i] + 1)+2);
            else if(arr[i] == 0)ans += 1;
            else ans += arr[i] - 1;
        }
        else if(arr[i] <= 0 && arr[i+1] <= 0){
           ans +=  abs(arr[i] + 1) + abs(arr[i+1] + 1);
        }
        else if (arr[i+1] > 0){
            if(arr[i] < 0)ans +=  (abs(arr[i] + 1)+2) + arr[i+1] - 1;
            else if(arr[i] == 0)ans += 1 + arr[i+1] - 1;
            else ans += arr[i] - 1 + arr[i+1] - 1;
        }
    }
    cout << ans;


    return 0;
}