#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int a[n],count=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            if(a[i]<=0){
                count++;
            }
        }
        if(count>=k){
            cout<<"NO"<<"\n";
        }else{cout<<"YES"<<"\n";}
    }

    return 0;
}
