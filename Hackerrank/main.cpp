#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    int t,n,ans;
    cin>>t;
    while(t--){
        cin>>n;
        if(n==0){
            cout<<1<<"\n";
        }
        else{ans=1;
            for(int i=1; i<=n; i++ ){

                if(i%2 != 0){
                  ans*=2;
                }
                else{ans+=1;}
            }
            cout<<ans<<"\n";
        }

    }

    return 0;
}
