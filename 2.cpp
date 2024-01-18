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

    ll n; cin >> n;

    ll sum = 0;

    for (ll i = 1; i < n; ++i) {
        ll num; cin >> num;
        sum += num;
    }

    ll res = (n * (n + 1) / 2) - sum;

    cout << res << endl;

    return 0;
}