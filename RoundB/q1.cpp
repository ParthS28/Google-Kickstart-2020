#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    int cc = 1;
    while (t--) {
        cout << "Case #" << cc++ << ": ";
        int n;
        cin >> n;
        vector<int> h(n);
        for (int&v : h) cin >> v;
        int ans = 0;
        for (int i = 1; i+1 < n; i++) {
            ans += h[i-1] < h[i] && h[i+1] < h[i];
        }
        cout << ans << endl;
    }
}