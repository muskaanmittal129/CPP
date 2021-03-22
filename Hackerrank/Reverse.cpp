//#include <bits/stdc++.h>
//typedef long long ll;
//using namespace std;
//
//int main() {
//    int i,j,k,rem,rev,num,value,count=0;
//    cin>>i>>j>>k;
//    for(int x=i; x<=j; x++){
//        num=x;
//        rev=0;
//        while(num>0){
//            rem=num%10;
//            rev=rev*10 + rem;
//            num/=10;
//        }
//        value = abs(x-rev) / k;
//        if(value*k == abs(x-rev) ){
//            count++;
//        }
//    }
//    cout<<count;
//
//    return 0;
//}
