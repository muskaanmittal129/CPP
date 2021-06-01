#include <bits/stdc++.h>
using namespace std;

#define ll              long long int
#define mod             1000000007
#define pi              3.141592653589793238
#define lcm(a,b)        (a/(__gcd(a,b)))*b
#define FASTIO          ios_base::sync_with_stdio(false);cin.tie(NULL);cout<<fixed;cout.precision(10);


int main() {
    FASTIO
    ll t;
     cin >> t;
     while(t--){
         ll n;
         cin >> n;
         string s = "9";
         ll num = 8;
         for(ll i = 0; i < n-1; i++){
             s += to_string(num);
             if(num == 9)num = 0;
             else num += 1;
         }
         cout << s << "\n";
     }



    return 0;
}