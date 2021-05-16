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
        int k;
        cin >> k;
        int w = 100 - k;
        int gd = __gcd(k, w);
        cout << (w/gd) + (k/gd) << "\n";

    }

    return 0;
}