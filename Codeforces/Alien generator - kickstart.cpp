//
//#include <bits/stdc++.h>
//using namespace std;
//
//long int countConsecutive(long int N)
//{
//    long long int count = 0;
//    for (long long int L = 1; L * (L + 1) < 2 * N; L++)
//    {
//        double a = (1.0 * N-(L * (L + 1)) / 2) / (L + 1);
//        if (a-(long long int)a == 0.0)
//            count++;
//    }
//    return count+1;
//}
//
//
//int main()
//{
//    int t, q = 1;
//    cin >> t;
//    while(t--){
//        long long int N;
//        cin >> N;
//        long long int ans = countConsecutive(N);
//        cout << "Case #" << q << ": " << ans << "\n";
//        q++;
//    }
//
//    return 0;
//}
