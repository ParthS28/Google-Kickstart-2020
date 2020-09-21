#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n, 0);
    int ans = 0;
    for(int i = 0; i < n; i++) cin >> a[i];

    for(int i = 0; i < n-1;){
        int j = i;
        int d = a[i+1]-a[i];
        while(j < n-1 && (a[j+1]-a[j] == d)){
            j++;
        }
        ans = max(ans, j-i+1);
        i = max(i+1, j);
    }
    cout << ans << endl;
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