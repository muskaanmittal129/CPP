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
        string s;
        cin >> s;
        int n = s.length();
        int a = 0, b = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '0') a++;
            else b++;
        }
        int ans = min(a,b);
        if(ans % 2 == 0) cout << "NET" << "\n";
        else cout << "DA" << "\n";

    }

    return 0;
}