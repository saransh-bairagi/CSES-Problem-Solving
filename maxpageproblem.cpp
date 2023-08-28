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
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	// int testcases;
	// cin >> testcases;
	// while (testcases--) {

	// }
	int n, capacity; cin >> n >> capacity;
	vector<int>c(n + 1), p(n + 1);
	for (int i = 1; i < n + 1; i++)cin >> c[i];
	for (int i = 1; i < n + 1; i++)cin >> p[i];
	vector<vector<int>>dp(capacity + 1, vector<int>(n + 1,0));
	for (int j = 1; j <= n; j++) {
		for (int i = 1; i <= capacity; i++) {
			int op1 = (j == 1) ? 0 : dp[i][j - 1];
			int op2 = (i < c[j]) ? 0 : (p[j] + dp[i - c[j]][j - 1]);
			dp[i][j] = max(op1, op2);
		}
	}
	cout << dp[capacity][n];
}