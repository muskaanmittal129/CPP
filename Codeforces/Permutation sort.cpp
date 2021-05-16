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
//    while(t--) {
//        int n;
//        cin >> n;
//        int a[n];
//        for (int i = 0; i < n; i++)
//            cin >> a[i];
//
//        int flag = 1;
//        for(int i = 0; i < n; i++){
//            if(a[i] != i+1) {
//                flag = 0;
//                break;
//            }
//        }
//        if(flag)
//            cout << 0 << "\n";
//        else{
//            if(a[0] == n && a[n-1] == 1)
//                cout << 3 << "\n";
//            else if((a[0] == n && a[n-1] != 1) || (a[0] != n && a[n-1] == 1) || (a[0] != n && a[n-1] != 1 && a[0] != 1 && a[n-1] != n))
//                cout << 2 << "\n";
//            else
//                cout << 1 << "\n";
//        }
//
//
//    }
//
//
//
//    return 0;
//}