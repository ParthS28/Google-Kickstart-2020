#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n; cin >> n;
    ll a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    ll count = 0;
    ll maxm = -1;
    for(int i = 0; i < n; i++){
            if(a[i] > maxm && (i+1 == n || a[i] > a[i+1])){
                count+=1;
                
            }
            maxm = max(maxm, a[i]);
        
    }
    cout << count << endl;
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