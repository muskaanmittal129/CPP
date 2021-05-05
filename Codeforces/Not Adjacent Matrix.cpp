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
//        int n, num = 1, k = 0;
//        cin >> n;
//
//        if(n == 2)cout << -1 << "\n";
//        else{
//            int arr[n][n];
//            while(num <= n * n){
//
//                for(int j = 0; j < n; j++){
//                    for(int i = k; i < n; i+=2){
//                        arr[i][j] = num;
//                        num++;
//                    }
//                    if(k == 0) k = 1;
//                    else k = 0;
//                }
//                k = 1;
//            }
//            for(int i = 0; i < n; i++){
//                for(int j = 0; j < n; j++){
//                    cout << arr[i][j] << " ";
//                }cout << "\n";
//            }cout << "\n";
//        }
//    }
//    return 0;
//}