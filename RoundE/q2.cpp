#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    if((a + b - c)> n || (a + b - c == 1 && n >= 2)){
        cout << "IMPOSSIBLE\n"; return;
    }
    if(n == 1){
        cout << "1" << endl;
    }
    else if(n == 2){
        if(c == 2)
            cout << "1 1" << endl;
        else if(a == 2)
            cout << "1 2" << endl;
        else if(b == 2)
            cout << "2 1" << endl;
    }
    else{
        vector<int> ans;
        for(int i = 0; i < a-c; i++) ans.push_back(2);
        for(int i = 0; i < c; i++) ans.push_back(3);
        for(int i = 0; i < b-c; i ++) ans.push_back(2);
        int e = n -(a+b-c);
        if(e > 0){
            ans.insert(ans.begin()+1, e, 1);

        }
        for(auto i: ans){
            cout << i << " ";
        }
        cout << endl;
    }
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