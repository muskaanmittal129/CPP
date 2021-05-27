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
//        ll n, ans = 0;
//        cin >> n;
//        for(int i = 9, j = 0; i > 0 && j < 9;){
//            if(n >= i){
//                n -= i;
//                ans += i * pow(10, j);
//                i--; j++;
//            }
//            else{
//                ans += n * pow(10, j);
//                n = 0;
//                break;
//            }
//        }
//        if(n > 0)
//            cout << -1 << "\n";
//        else cout << ans << "\n";
//    }
//    return 0;
//}