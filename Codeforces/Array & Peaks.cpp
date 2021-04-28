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
//
//int main() {
//    FASTIO
//    int t;
//    cin >> t;
//    while(t--){
//        int n, k, num, flag = 0;
//        cin >> n >> k;
//        num = n;
//        int a[n] = {0};
//
//        if(n < 3 && k > 0) flag = 1;
//        else if(k == 0){
//            for(int i = 0; i < n; i++){
//                a[i] = i+1;
//            }
//        }
//        else if(n > 2){
//            a[0] = 1;
//            a[n-1] = 2;
//            int x = 1;
//            while(k>0 && x < n-1){
//
//                a[x] = num;
//                num--;
//                x += 2;
//                k--;
//            }
//            if(k > 0 && x >= n-1){
//                flag = 1;
//            }
//            else{
//                for(int i = 1; i < n-1; i++){
//                    if(a[i] == 0){
//                        a[i] = num;
//                        num--;
//                    }
//                }
//            }
//
//
//        }
//        if(flag == 1) cout << -1 ;
//        else{
//            for(int i = 0; i < n; i++){
//                cout << a[i] << " ";
//            }
//        }
//        cout << "\n";
//
//    }
//    return 0;
//}