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
	ll n;cin>>n;
	vector<ll>dp(n+1);
	dp[0]=0;
	for(ll i=1;i<n+1;i++){
		ll minsteps=1e6+2;
		ll temp=i;
		while(temp>0){
			ll digit=temp%10;
			temp/=10;
			if(digit!=0)
			minsteps=min(minsteps,1+dp[i-digit]);
		}
		dp[i]=minsteps;
	}
	cout<<dp[n];
}