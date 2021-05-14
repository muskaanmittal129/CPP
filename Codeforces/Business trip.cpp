//#include <bits/stdc++.h>
//using namespace std;
//
//#define ll              long long int
//#define mod             1000000007
//#define pi              3.141592653589793238
//#define lcm(a,b)        (a/(__gcd(a,b)))*b
//#define FASTIO          ios_base::sync_with_stdio(false);cin.tie(NULL);cout<<fixed;cout.precision(10);
//
//
//int main() {
//    FASTIO
//    int k, n = 12;
//    cin >> k;
//    int arr[n];
//    for(int i = 0; i < n; i++){
//        cin >> arr[i];
//    }
//    sort(arr, arr + n, greater<>());
//    int num = 0, i = 0, count  = 0;
//    while(num < k && i < n){
//        num += arr[i];
//        count++;
//        i++;
//    }
//    if(num < k) count = -1;
//
//    cout << count;
//
//    return 0;
//}