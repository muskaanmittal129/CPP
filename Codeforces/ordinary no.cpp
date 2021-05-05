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
//        ll n, count;
//        ll arr[10] = {11, 111, 1111, 11111, 111111, 1111111, 11111111, 111111111, 1111111111};
//        cin >> n;
//        string s = to_string(n);
//        ll len = s.length();
//        if(len == 1) count = n;
//        else{
//            count = (len - 1) * 9;
//            ll k = arr[len-2];
//            for(ll i = k; i <= n; i+=k){
//                count++;
//            }
//        }
//        cout << count << "\n";
//
//
//    }
//    return 0;
//}