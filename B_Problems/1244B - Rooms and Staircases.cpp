#include <bits/stdc++.h> 
using namespace std;
int T, n;
string s;

int main() {
	cin >> T;
	while (T--)
	{
		cin >> n >> s;
		int ret1 = 0, ret2 = 0;
		for (int i = n - 1; i >= 0; i--) {
			if (s[i] == '1') {
				ret1 += 2 * (i + 1);
				break;
			}
		}
		if (!ret1)ret1 = n;
		for (int i = 0; i < n; i++) {
			if (s[i] == '1') {
				ret2 += 2 * (n - i);
				break;
			}
		}
		if (!ret2) ret2 = n;
		cout << max(ret1, ret2) << endl;
	}
	return 0;
}
