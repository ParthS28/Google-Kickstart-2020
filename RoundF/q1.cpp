#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n, x; cin >> n >> x;
    vector<int> a(n);
    vector<int> queue;
    for(int i = 0; i < n; i++) cin >> a[i];
    
    vector<pair<int, int>> q;
    
    for (int i = 0; i < n; i++) {
      q.push_back({(a[i] + x - 1) / x, i});
    }
    
    sort(q.begin(), q.end());
    for(int i = 0; i < n; i++) queue.push_back(q[i].second);
    for(int o: queue) cout << o+1 << " ";
    cout << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t, i=1;
	cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		++i;
	}
}