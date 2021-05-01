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
//        string s;
//        cin >> s;
//        int n = s.length();
//        if(s[0] != 'a') cout << "YES" << "\n" << (s + 'a') << "\n";
//        else if(s[n-1] != 'a' ) cout << "YES" << "\n"  << ('a' + s) << "\n";
//        else{
//            int i = 0, j = n-1, c1 = 0, c2 = 0, flag = 0;
//            while(j >= i){
//                if(s[i] == 'a')
//                    c1++;
//                if(s[j] == 'a')
//                    c2++;
//                if(s[i] != 'a' || s[j] != 'a')
//                {flag = 1;
//                    break;}
//                i++;
//                j--;
//            }
//            if(c2 >= c1 && flag == 1) cout << "YES" << "\n" << (s + 'a') << "\n";
//            else if(c2 < c1 && flag == 1) cout << "YES" << "\n"  << ('a' + s) << "\n";
//            else cout << "NO" << "\n";
//
//        }
//    }
//
//
//
//    return 0;
//}