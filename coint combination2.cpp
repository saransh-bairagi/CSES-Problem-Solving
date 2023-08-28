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
	ll n, target; cin >> n >> target;
	vector<ll>coins(n);
	for (ll i = 0; i < n; i++)cin >> coins[i];
	int dp[n + 1][target + 1];
	for (ll i = 1; i < n + 1; i++) {
		for (ll j = 0; j < target + 1; j++) {
			if (j == 0)dp[i][j] = 1;
			else {
				int op1 = (i == 1) ? 0 : dp[i - 1][j];
				int op2 = (j < coins[i - 1]) ? 0 : dp[i][j - coins[i - 1]];
				dp[i][j] = (op1 + op2) % 1000000007;
			}

		}
	}

	cout << dp[n][target];
}