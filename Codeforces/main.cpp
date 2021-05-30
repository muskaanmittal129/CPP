#include <bits/stdc++.h>
using namespace std;

#define ll              long long int
#define mod             1000000007
#define pi              3.141592653589793238
#define lcm(a,b)        (a/(__gcd(a,b)))*b
#define FASTIO          ios_base::sync_with_stdio(false);cin.tie(NULL);cout<<fixed;cout.precision(10);


int main() {
    FASTIO
    ll n;
    cin >> n;
    ll b[n];
    for(ll &i : b){
        cin >> i;
    }
    vector<ll>v;
    v.push_back(b[0]);
    v.push_back(b[1] + v.back());
    ll mx = b[0];
    for(ll i = 2; i < n; i++){
        mx = max(mx, v.back());
        ll temp = b[i] + mx;
        v.push_back(temp);
    }
    for(ll x : v){
        cout << x << " ";
    }




    return 0;
}