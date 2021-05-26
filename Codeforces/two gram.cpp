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
//    int n, mx = 0, ans;
//    cin >> n;
//    string s;
//    cin >> s;
//    for(int i = 0; i < n-1; i++){
//        string pat = s.substr(i, 2);
//        int count = 1;
//        for(int j = i+1; j < n-1; j++){
//            if(s.substr(j, 2) == pat)
//                count++;
//        }
//        if(count > mx){
//            mx = count;
//            ans = i;
//        }
//    }
//    cout << (s.substr(ans, 2));
//
//    return 0;
//}