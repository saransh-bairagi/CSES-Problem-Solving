//JAI SHREE RAM
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
inline void debugMode() {

#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE
}
int main() {
	debugMode();
	// int testcases;
	// cin >> testcases;
	// while (testcases--) {	
	// }
	vector<ll>dp(1000000,0);
	ll n,target;cin>>n>>target;
	vector<ll>cont(n);
	for(ll i=0;i<n;i++)cin>>cont[i];
	dp[0]=1;
	for(ll i=1;i<target+1;i++){
		for(ll c=0;c<cont.size();i++){
			if(i>=c){
				dp[i]+=dp[i-cont[c]];
			}
		}
	}
	cout<<dp[target]<<"\n";

}