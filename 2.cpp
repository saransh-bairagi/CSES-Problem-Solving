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
	string s;cin>>s;
	int temp=0,answer=0;
	map<char,bool>mp;
	for(int i=0;i<s.length();i++){
		if(!mp[s[i]]){
			temp++;
			mp[s[i]]=true;
		}
		else{
			answer=max(temp,answer);
			temp=1;
			mp.clear();
			mp[s[i]]=true;
		}
	}
	cout<<max(temp,answer);
}