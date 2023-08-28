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
void solve( ll n){
	if(n==1){
		cout<<n<<" ";
		return;
	}
	cout<<n<<" ";
	if(n%2==0)solve(n/2);
	else solve(3*n+1);
}
int main() {
	debugMode();
	ll n;cin>>n;
	solve(n);

}