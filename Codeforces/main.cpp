#include <bits/stdc++.h>
using namespace std;

#define ll              long long int
#define mod             1000000007
#define pi              3.141592653589793238
#define lcm(a,b)        (a/(__gcd(a,b)))*b
#define FASTIO          ios_base::sync_with_stdio(false);cin.tie(NULL);cout<<fixed;cout.precision(10);


int main() {
    FASTIO
    int a, b, c;
    cin >> a >> b >> c;
    int ans;
    int mx, mn1, mn2;
    mx = max(a, b);
    mn1 = min(a, b);
    if(mx < c){
        mn2 = mx;
        mx = c;
    }else{
        mn2 = c;
    }
    ans = (mx + 1) - (mn1 + mn2);
    if(ans < 1) ans = 0;

    cout << ans;



    return 0;
}