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
#define MOD 1000000007

int main() {

    Mostafa

    int n; cin >> n;

    int ans = 1;

    for (int i = 0; i < n; ++i) {
        ans *= 2;
        ans %= MOD;
    }

    cout << ans << endl;
    return 0;
}