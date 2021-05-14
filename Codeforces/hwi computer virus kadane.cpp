//#include<bits/stdc++.h>
//#define ll long long
//#define pb push_back
//#define db double
//#define ldb long double
//#define ft first
//#define sc second
//#define mod 1000000007
//#define pi 3.141592653589793238
//#define test int t;cin>>t;while(t--)
//#define inf INT_MAX
//#define minf INT_MIN
//using namespace std;
//
//void fastIO(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
//    cout.tie(0);
//}
//
//void file(){
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
//}
//
//int kadane(int a[], int n){
//    int mx = INT_MIN;
//    int curr = 0;
//    int ans = 0;
//    for(int i=0;i<n;i++){
//        curr += a[i];
//        mx = max(mx,a[i]);
//        ans = max(ans,curr-mx);
//        if(curr<0){
//            curr = 0;
//            mx = INT_MIN;
//        }
//    }
//    return ans;
//}
//
//int main(){
//    fastIO();
//    int n;
//    cin>>n;
//    int a[n];
//    for(int i=0;i<n;i++){
//        cin>>a[i];
//    }
//    int ans = kadane(a,n);
//    cout<<ans<<"\n";
//    return 0;
//}