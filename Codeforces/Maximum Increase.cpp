//#include <bits/stdc++.h>
//using namespace std;
//typedef long long int ll;
//#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout<<fixed;cout.precision(10);
//
//int main() {
//    FASTIO
//    int n;
//    cin >> n;
//    int arr[n], dp[n];
//    for(int i = 0; i < n; i++){
//        cin >> arr[i];
//        dp[i] = 1;
//    }
//
//    for(int i = 1; i < n; i++){
//        if(arr[i] > arr[i-1]){
//            dp[i] = max(dp[i], dp[i-1] + 1);
//        }
//    }
//    int max = dp[0];
//    for(int i = 1; i < n; i++){
//        if(dp[i] > max){
//            max = dp[i];
//        }
//    }
//    cout << max;
//    return 0;
//}
