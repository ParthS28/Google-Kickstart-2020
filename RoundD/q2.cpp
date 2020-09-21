#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    ll n; cin >> n; int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    int incr = 0, decr = 0;
    int count = 0;
    for(int i = 1; i < n; i++){
        if(a[i+1] > a[i]){
            incr++; decr = 0;
        }
        else if(a[i+1] < a[i]){
            decr++; incr = 0;
        }

        if(incr > 3 || decr > 3){
            count ++;
            incr = 0; decr = 0;
        }
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