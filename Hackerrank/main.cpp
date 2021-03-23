#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    int n,k,q,value,q_value;
    cin>>n>>k>>q;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    if(k>n){
        for(int i=1; i<=k-n; i++){
            value = a[n-1];
            int j = n-1;
            while(j>0){
                a[j] = a[j-1];
                j--;
            }
            a[0] = value;
        }
    }
    else{
        int b[k];
        for(int i=0; i<k; i++){
            b[i] = a[n-1-i];
        }
        int j = n-1;
        while(j-k >= 0){
            a[j] = a[j - k];
            j--;
        }
        while(j>=0){
            for(int i=0; i<k; i++){
                a[j] = b[i];
                j--;
            }

        }
    }

    while(q--){
        cin>>q_value;
        cout<<a[q_value]<<"\n";
    }

    return 0;
}
