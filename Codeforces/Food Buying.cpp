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
//        ll s, back, ans = 0;
//        cin >> s;
//        while(s >= 10){
//            back = s / 10;
//            ans +=  (10 * back);
//            s = (s - (10 * back) ) + back;
//        }
//        cout << ans + s << "\n";
//    }
//
//    return 0;
//}