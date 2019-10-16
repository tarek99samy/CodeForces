#include <bits/stdc++.h> 
using namespace std;

int main() {
	string door;
	int n, ans = 0;
	map<int, int> mp;
	cin >> n >> door;	
	for (auto& c : door) {
		if (isupper(c)) {
			if (mp[tolower(c)])	mp[tolower(c)]--;
			else ans++;
		}
		else mp[c]++;
	}
	cout << ans << endl;
	return 0;
}
