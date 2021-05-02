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
//        vector<int> v;
//        vector<int> v2;
//        cin >> n >> x;
//        int a[n];
//        for(int i = 0; i < n; i++){
//            cin >> a[i];
//        }
//        int add = 0;
//        for(int i = 0; i < n; i++){
//            add += a[i];
//        }
//        if(add == x){
//            flag = 1;
//        }
//        else{
//
//            int sum = 0;
//            for(int i = 0; i < n; i++){
//                sum += a[i];
//                if(sum != x ){
//                    v.push_back(a[i]);
//
//                }
//                else{
//                    v2.push_back(a[i]);
//                    sum -= a[i];
//                }
//
//            }
//            for(auto u : v2){
//                v.push_back(u);
//            }
//        }
//
//        if(flag == 1){
//            cout << "NO" << "\n";
//        }
//        else{
//            cout << "YES" << "\n";
//            for(auto j : v){
//                cout << j << " ";
//            }cout << "\n";
//        }
//
//    }
//
//
//
//    return 0;
//}