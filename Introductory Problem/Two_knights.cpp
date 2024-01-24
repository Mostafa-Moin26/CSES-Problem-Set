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

    int n; cin >> n;

    for (ll i = 1; i <= n;  ++i) {
        ll totalBox = i * i;

        ll total = totalBox * (totalBox - 1) / 2;
        ll attackPosition = (i - 2) * 4 * (i - 1);
        cout << total - attackPosition << "\n";
    }
    return 0;
}