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
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int i = 0, j = n-1;
        while(k>0 && i < n-1){
            if(a[i] > 0){
                a[i]--;
                a[j]++;
                k--;
            }
            else if(a[i] == 0) i++;
        }
        for(int x = 0; x < n; x++){
            cout << a[x] << " ";
        }cout << "\n";


    }
    return 0;
}