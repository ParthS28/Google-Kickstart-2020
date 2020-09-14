#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        int n, b;
        cin >> n >> b;
        int a[n];
        for(int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        sort(a, a + n);
        int count = 0, price = 0;
        for(int j = 0; j < n; j++)
        {
            if(price+a[j] <= b){
                count++; price += a[j]; }
            else
                break;
        }
        cout << "Case #" << i << ": " << count << endl;
    }
}