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
	// int testcases;
	// cin >> testcases;
	// while (testcases--) {
		
	// }
	ll n,capacity;cin>>n>>capacity;
	vector<ll>c(n),p(n);
	for(int i=0;i<n;i++)cin>>c[i];
	for(int i=0;i<n;i++)cin>>p[i];
	int dp[capacity+1][n+1];
	for(ll i=0;i<capacity+1;i++){
		for(ll j=0;j<n+1;j++){
			if(i==0||j==0){
				dp[i][j]=0;
				continue;
			}
			if(i>=c[j-1])
			dp[i][j]=max(1LL*dp[i][j-1],1LL*(p[j-1]+dp[i-c[j-1]][j-1]));
			else
			dp[i][j]=dp[i][j-1];
		}
	}
	cout<<dp[capacity][n];
}