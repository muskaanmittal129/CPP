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
//    int t;
//    cin >> t;
//    while(t--){
//        ll n;
//        cin >> n;
//        ll a[n];
//        for(ll &i : a){
//            cin >> i;
//        }
//        ll mx = 0, ans = -2;
//        for(int i = 0; i < n; i++){
//            if(a[i] > mx && ((i>0 && a[i-1] < a[i]) || (i < n-1 && a[i+1] < a[i]))){
//                ans = i;
//                mx = a[i];
//            }
//        }
//        cout << ans+1 << "\n";
//
//    }
//    return 0;
//}