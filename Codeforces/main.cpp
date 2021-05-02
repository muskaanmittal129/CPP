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
        ll n, flag = 0;
        cin >> n;
        if(n % 2 == 0 && n > 1){
            ll sqr =  sqrt(n/2);
            if(sqr * sqr == (n/2)){
                flag = 1;
            }
            else if (ceil(log2(n)) == floor(log2(n))) flag = 1;
        }

        if(flag == 1) cout << "YES" <<"\n";
        else cout << "NO" << "\n";




    }



    return 0;
}