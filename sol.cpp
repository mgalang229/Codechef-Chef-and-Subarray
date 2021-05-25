#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int mx = INT_MIN;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] > 0) {
			// count the number of non-zero values
			cnt++;
		} else {
			// store the 'cnt' in 'mx'
			mx = max(mx, cnt);
			cnt = 0;
		}
	}
	// store the 'cnt' in 'mx' in case in does not encounter '0'
	mx = max(mx, cnt);
	cout << mx << '\n';
	return 0;
}
