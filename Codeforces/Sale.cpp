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
//    int n, m;
//    cin >> n >> m;
//    int a[n];
//    for(int i = 0; i < n; i++){
//        cin >> a[i];
//    }
//    sort(a, a + n);
//    int i = 0, ans = 0;
//    while(m--){
//        if(a[i] < 0){
//            ans += (-a[i]);
//            i++;
//        }
//        else break;
//    }
//    cout << ans;
//
//    return 0;
//}