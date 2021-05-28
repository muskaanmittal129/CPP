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
//        ll arr[2*n];
//        for(ll &i : arr)
//            cin >> i;
//        sort(arr, arr + 2*n);
//        for(ll i = 1; i < (2*n)-2; i+=2){
//            swap(arr[i], arr[i+1]);
//        }
//        for(ll i : arr){
//            cout << i << " ";
//        }cout << "\n";
//
//    }
//    return 0;
//}