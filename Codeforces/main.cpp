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
        int n, flag = 0;
        cin >> n;
        string s;
        cin >> s;
       unordered_map<char, int> map;
       for(int i = 0; i < n;){
           if(map[s[i]] > 0){
               cout << "NO" << "\n";
               flag = 1;
               break;
           }
           else{
               map[s[i]]++;
               i++;
               while(i < n && s[i] == s[i-1]) i++;
           }
       }
       if(flag == 0) cout << "YES" << "\n";

    }
    return 0;
}