//#include<bits/stdc++.h>
//#define mod 1000000007
//#define pi 3.141592653589793238
//using namespace std;
//
//bool solve(vector<int> &a, vector<int> &b, int mid) {
//    int n = (int) a.size();
//    int m = (int) b.size();
//    long long sum = 0;
//    for(int i = 0; i < mid; i++) {
//        sum += a[i];
//    }
//    int k = mid;
//    for(int i = 0; i < m; i++) {
//        if(k < n) {
//            sum += a[k];
//            k++;
//        }
//        sum -= b[i];
//        if(sum < 0) {
//            return false;
//        }
//    }
//    return true;
//}
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    int n;
//    cin >> n;
//    vector<int> a(n);
//    for(int i = 0; i < n; i++) {
//        cin >> a[i];
//    }
//    int m;
//    cin >> m;
//    vector<int> b(m);
//    for(int i = 0; i < m; i++) {
//        cin >> b[i];
//    }
//    int start = 0, end = n - 1;
//    int sol = -1;
//    while(start <= end) {
//        int mid = (start + end) / 2;
//        if(solve(a, b, mid)) {
//            sol = mid;
//            end = mid - 1;
//        }
//        else {
//            start = mid + 1;
//        }
//    }
//    assert(sol != -1);
//    cout << sol + 1 << '\n';
//
//    return 0;
//}