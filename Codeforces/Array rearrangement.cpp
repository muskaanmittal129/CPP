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
//        int n, x, flag = 0;
//        cin >> n >> x;
//        if(x == 1) flag = 1;
//        else{
//            int a[n], b[n];
//            for(int i = 0; i < n; i++){
//                cin >> a[i];
//            }
//            for(int i = 0; i < n; i++){
//                cin >> b[i];
//            }
//            sort(a, a + n);
//            sort(b, b + n, greater<int>());
//            for(int i = 0; i < n; i++){
//                if(a[i] + b[i] > x)
//                {flag = 1;
//                    break;}
//            }
//        }
//
//        if(flag == 1) cout << "NO" << "\n";
//        else cout << "YES" << "\n";
//    }
//
//
//
//    return 0;
//}