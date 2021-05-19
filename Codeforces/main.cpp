#include <bits/stdc++.h>
using namespace std;

#define ll              long long int
#define mod             1000000007
#define pi              3.141592653589793238
#define lcm(a,b)        (a/(__gcd(a,b)))*b
#define FASTIO          ios_base::sync_with_stdio(false);cin.tie(NULL);cout<<fixed;cout.precision(10);


int main() {
    FASTIO
   int t;
    cin >> t;
    while(t--){
     int n, k;
     cin >> n >> k;
     int b = ceil((k+n) / 2.0);
     if(k > n && (((2*b) - n) != k || b > n)){
         cout << (k - n) << "\n";
     }
     else if(k < n && (((2*b) - n) != k || b > n)){
            cout << 1 << "\n";
        }
     else cout << 0 << "\n";

    }


    return 0;
}