//#include <bits/stdc++.h>
//using namespace std;
//
//#define ll              long long int
//#define mod             1000000007
//#define pi              3.141592653589793238
//#define lcm(a,b)        (a/(__gcd(a,b)))*b
//#define FASTIO          ios_base::sync_with_stdio(false);cin.tie(NULL);cout<<fixed;cout.precision(10);
//
//ll smallestprime(ll n){
//    for(ll i = 3; i*i <= n; i+=2){
//        if(n % i == 0)return i;
//    }
//    return n;
//}
//
//int main() {
//    FASTIO
//    int t;
//    cin >> t;
//    while(t--){
//        ll n, k;
//        cin >> n >> k;
//        if(n % 2 == 0)
//            cout << (n + 2*k)<<"\n";
//        else{
//            n += (2 * (k -1)) + smallestprime(n);
//            cout << n << "\n";
//        }
//
//    }
//    return 0;
//}