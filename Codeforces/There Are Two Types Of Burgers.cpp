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
//        int b, p, f, h, c, mxp, mx, mn, mnp, ans = 0;
//        cin >> b >> p >> f >> h >> c;
//        if(b >= 2){
//            if(h >= c){
//                mxp = h;
//                mx = p;
//                mnp = c;
//                mn = f;
//            }
//            else{
//                mxp = c;
//                mx = f;
//                mnp = h;
//                mn = p;
//            }
//
//            if(b/2 >= mx){
//                ans = mx * mxp;
//                if((b - (mx * 2)) / 2 >= mn ){
//                    ans += (mn * mnp);
//                }else{
//                    ans += (((b - (mx * 2)) / 2) * mnp);
//                }
//            }else{
//                ans = (b/2) * mxp;
//                if((b - ((b/2) * 2)) / 2 >= mn ){
//                    ans += (mn * mnp);
//                }else{
//                    ans += (((b - ((b/2) * 2)) / 2) * mnp);
//                }
//            }
//
//        }
//
//        cout << ans << "\n";
//    }
//
//    return 0;
//}