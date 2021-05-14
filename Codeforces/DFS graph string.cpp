//https://codeforces.com/problemset/problem/919/d
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long int ll;
//#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout<<fixed;cout.precision(10);
//
//vector<ll> adj[300000+10];
//ll dp[300000+10][26],vis[300000+10],act[300000+10];
//ll ans=1;
//string s;
//bool cycle=false;
//
//void dfs(ll u)
//{
//    vis[u]=1;
//    act[u]=1;
//    for(auto e:adj[u])
//    {
//        if(act[e])
//        {
//            cycle=true;
//            return ;
//        }
//        if(!vis[e])
//            dfs(e);
//        for(int i=0;i<26;i++)
//            dp[u][i]=max(dp[e][i],dp[u][i]);
//    }
//    dp[u][s[u]-97]++;
//    for(ll i=0;i<26;i++)
//        ans=max(ans,dp[u][i]);
//    act[u]=0;
//}
//
//int main()
//{
//    fastio
//    ll n , m;
//    cin >> n >> m;
//    cin >> s;
//    for(ll i = 0 ; i < m ; i++)
//    {
//        ll x , y;
//        cin >> x >> y;
//        x--;
//        y--;
//        adj[x].push_back(y);
//    }
//    for(ll i = 0 ; i < n ; i++)
//        if(!vis[i])
//            dfs(i);
//    if(cycle)
//        ans = -1;
//    cout << ans << "\n";
//    return 0;
//}