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
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int flag = 0, sqrt;



            for(int i = 0; i < n; i++){
                sqrt = std::sqrt(a[i]);

                if((sqrt * sqrt) != a[i])
                    {
                        flag = 1;
                        break;
                    }

            }

        if(flag == 1) cout << "YES" << "\n";
        else cout << "NO" << "\n";

    }
    return 0;
}