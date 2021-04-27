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
//
//int main() {
//    FASTIO
//    int t;
//    cin >> t;
//    while(t--){
//        ll n;
//        cin >> n;
//        string s = to_string(n);
//        ll dig = s.length();
//        ll k = dig - 4;
//        ll count = 0;
//
//        while(n >= 2050){
//            ll num = 2050 * (pow(10, k));
//            count = count + (n / num);
//            n = n % num;
//            if(n < num) k--;
//        }
//        if(n != 0) cout << -1 << "\n";
//        else cout << count << "\n";
//    }
//    return 0;
//}