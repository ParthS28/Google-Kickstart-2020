#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int count = 0;
    int n, k;
    cin >> n >> k;
    vector<int> a(n, 0);
    for(int i = 0; i < n; i++)
    cin >>  a[i];
    int temp = 0;
    for(int i = 1; i < n; i++){
        // cout << a[i];

        if(a[i] == a[i-1]-1){
            temp++;
        }
        else{
            temp = 0;
        }

        if(a[i] == 1 && temp >= k-1){
            count++;
            // cout << count << " ";
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