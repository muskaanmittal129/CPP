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
//    ll n;
//    cin >> n;
//    string s = to_string(n);
//    ll i, j = 0;
//    for(i = 0; i < s.length(); i += j ){
//        if(s.substr(i, 1) == "1"){
//            j = 1;
//            if(i < s.length()-1 && s.substr(i, 2) == "14"){
//                j = 2;
//                if(i < s.length()-2 && s.substr(i, 3) == "144"){
//                    j = 3;
//                }
//            }
//        }
//        else break;
//    }
//    if(i >= s.length() )cout << "YES" << "\n";
//    else cout << "NO" << "\n";
//
//
//
//
//
//    return 0;
//}