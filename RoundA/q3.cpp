#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int n, k, a[100000];

void solve() {
	cin >> n >> k;
	for(int i=0; i<n; ++i)
		cin >> a[i];

	int lb=1, rb=a[n-1]-a[0];
	while(lb<rb) {
		int mb=(lb+rb)/2;
		int k2=0;
		for(int i=1; i<n; ++i) {
			int d=a[i]-a[i-1];
			k2+=(d+mb-1)/mb-1;
		}
		if(k2<=k)
			rb=mb;
		else
			lb=mb+1;
	}
	cout << lb << "\n";
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


// Half correct, TLE for second case
/*
int maxdiff(int a[], int n)
{
    int d = 0, pos = 0;
    for(int i = 0; i < n-1; i++)
    {
        if(a[i+1] - a[i] > d) {
            d = a[i+1] - a[i]; pos = i;}
    }
    return d;
}
int main()
{
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        int diff[n-1];
        for(int j = 0; j < n-1; j++)
        {
            diff[j] = a[j+1] - a[j];
        }

        sort(diff, diff+n-1);
        for(int j = 0; j < k; j++)
        {
            sort(diff, diff+n-1);
            diff[n-2] = round(double(double(diff[n-2]) / 2));
        }
        sort(diff, diff+n-1);
        cout << "Case #" << i << ": " << diff[n-2] << endl;
    }
}
*/

