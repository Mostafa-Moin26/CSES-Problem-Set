#include<bits/stdc++.h>

using namespace std;

#define w(x)            int x;cin>>x;while(x--)
#define Mostafa         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll              long long
#define pb              push_back
#define ff              first
#define ss              second
#define ps(x,y)         fixed<<setprecision(y)<<x
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)

int main() {

	Mostafa

	w(x) {
		ll x, y; cin >> x >> y;

		ll n = max(x, y);
		ll ans = n * n - n + 1;

		if (n & 1) {

			if (n - y == 0) {
				ans += (n - x);
			} else {
				ans -= (n - y);
			}
		} else {
			if (n - x == 0) {
				ans += (n - y);
			} else {
				ans -= (n - x);
			}
		}

		cout << ans << endl;
	}

	return 0;
}