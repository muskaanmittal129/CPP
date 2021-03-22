//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main() {
//    int n,m,count,ma=0,max_count=0;
//    cin>>n>>m;
//    string a[n];
//
//    for(int i=0; i<n; i++){
//        cin>>a[i];
//    }
//    for(int i=0; i<n-1; i++){
//        for(int j=i+1; j<n; j++){
//            count=0;
//            for(int k=0; k<m; k++){
//                if((a[i][k]=='1') || (a[j][k]=='1')){
//                    count++;
//
//                }
//            }
//            if(count==ma){
//                max_count++;
//            }
//            else if(ma < count){
//                ma=count;
//                max_count=1;
//            }
//
//        }
//    }
//    cout<<ma<<"\n"<<max_count;
//    return 0;
//}
