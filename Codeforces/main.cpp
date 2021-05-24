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
        ll a[n],count = 0, temp = -1;
        for(ll &i : a){
            cin >> i;
        }
        sort(a, a+n);
        ll diff = INT_MAX;
        for (ll i=0; i<n; i++) {
            if(a[i] <= 0)count++;
            else{
              temp = i;
              break;
            }
            if(i < n-1){
                if (abs(a[i + 1] - a[i]) < diff)
                {diff = abs(a[i + 1] - a[i]);}
            }

        }
//        cout << temp << " " << diff << "\n";
        if(a[temp] <= diff)
            count++;
        cout << count << "\n";
    }




    return 0;
}