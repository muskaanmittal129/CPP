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
//        ll n, count = 0;
//        cin >> n;
//        int a[n];
//        for(int &i : a){
//            cin >> i;
//        }
//        sort(a, a+n);
//        ll j = a[0];
//        for(int i = 1; i < n; i++){
//            if(a[i] != j)count++;
//        }
//        cout << count << "\n";
//
//    }
//    return 0;
//}