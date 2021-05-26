//#include <bits/stdc++.h>
//using namespace std;
//
//#define ll              long long int
//#define mod             1000000007
//#define pi              3.141592653589793238
//#define lcm(a,b)        (a/(__gcd(a,b)))*b
//#define FASTIO          ios_base::sync_with_stdio(false);cin.tie(NULL);cout<<fixed;cout.precision(10);
//
//
//int main() {
//    FASTIO
//    ll n;
//    cin >> n;
//    ll a[n];
//    for(ll &i : a)
//        cin >> i;
//    ll low = a[0], high = a[n-1], mx, mn;
//    for(ll i = 0; i < n; i++){
//        if(i == 0)
//            mn =  abs(a[i] - a[i+1]);
//        else if(i == n-1)
//            mn =  abs(a[i] - a[i-1]);
//        else mn = min(abs(a[i] - a[i-1]), abs(a[i] - a[i+1]));
//
//        mx = max(abs(a[i] - low), abs(a[i] - high));
//        cout << mn << " " << mx << "\n";
//    }
//
//    return 0;
//}