//#include <bits/stdc++.h>
//using namespace std;
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
//    string s;
//    cin >> s;
//    int len = s.size(), count = 0;
//    for(int i = 0; i < len; i++){
//        if(s[i] == 'Q'){
//            for(int j = i+1; j < len; j++){
//                if(s[j] == 'A'){
//                    for(int k = j+1; k < len; k++){
//                        if(s[k] == 'Q'){
//                            count++;
//                        }
//                    }
//                }
//            }
//        }
//    }
//
//    cout << count;
//    return 0;
//}