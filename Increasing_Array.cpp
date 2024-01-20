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
    vector<ll> arr(n);

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    ll cnt = 0;

    ll val = arr[0];

    for (int i = 1; i < n; ++i) {

        if (val < arr[i]) val = arr[i];
        else cnt += (val - arr[i]);
    }

    cout << cnt << "\n";
    return 0;
}