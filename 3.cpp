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
void solve(int n, int &answer, int face, int sum) {
	if (sum == n) {
		answer++;
		return;
	}
	if (sum > n)return;
	for(int i=1;i<7;i++){
		solve(n,answer,i,sum+i);
	}
}
int main() {
	debugMode();
	int n; cin >> n;
	int answer = 0;
	solve(n, answer, 0, 0);
	cout << answer << "\n";
}