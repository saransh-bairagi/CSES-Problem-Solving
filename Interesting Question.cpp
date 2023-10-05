// Number of ways n elements even sum
//JAI SHREE RAM
#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define fi(n) for(ll i=0; i<n; i++)
#define pb push_back
#define fin(i,a,n) for(ll i=a; i<n; i++)
#define fcontn vector<ll> cont(n); for(ll i = 0;i<n;i++){cin >> cont[i];}
#define nn ll n; cin >> n;
#define nk ll n,k; cin >> n>>k ;
#define nkx ll n,k,x;cin>>n>>k>>x;
#define prs setprecision(1e7)<<
using namespace std;
inline void debugMode() {

#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE
}
ll dp[1000000][2];
ll solve(ll n, ll low, ll high) {
	ll total = high - low + 1;
	ll even = total / 2;
	ll odd = total - even;
	dp[1][0]=even;
	dp[1][1]=odd;
	// cout<<even<<" "<<odd;
	for(ll i=2;i<=n+1;i++){

		dp[i][0]=(odd*dp[i-1][1])+(even*dp[i-1][0]);
		dp[i][1]=(odd*dp[i-1][0])+(even*dp[i-1][1]);
	}
	return dp[n][0];
}
signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	debugMode();
	int testcases; cin >> testcases;
	while (testcases--) {
		// memset(dp, sizeof(dp), 0);
		ll n, low, high; cin >> n >> low >> high;
		// cout<<n<<" "<<low<<" "<<high;
		solve(n,low,high);
		cout<<dp[2][1];
	}
}
