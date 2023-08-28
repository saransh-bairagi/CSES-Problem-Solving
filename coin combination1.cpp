//JAI SHREE RAM
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
inline void debugMode() {

#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE
}
int main() {
	debugMode();
	ll n,target;cin>>n>>target;
	vector<ll>coins(n+1);
	for(ll i=1;i<=n;i++)cin>>coins[i];
	ll dp[target+1];
	dp[0]=1;
	for(ll i=1;i<=target;i++){
		ll temp=0;
		for(ll j=1;j<=n;j++){
			temp+=(i<coins[j])?0:dp[i-coins[j]]%1000000007;
		}
		dp[i]=temp%1000000007;
	}
	cout<<dp[target];
}