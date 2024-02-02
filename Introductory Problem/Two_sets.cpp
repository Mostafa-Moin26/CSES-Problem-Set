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

    ll sum = n * (n + 1) / 2;

    if (sum & 1) {
        cout << "NO" << endl;
        return 0;
    }

    vector<int> a, b;

    if (n % 4 == 3) {
        a.pb(1);
        a.pb(2);
        b.pb(3);

        for (int i = 4, j = n; i < j; i++, j--) {

            if (i & 1) {
                a.pb(i);
                a.pb(j);
            } else {
                b.pb(i);
                b.pb(j);
            }
        }

    } else {

        for (int i = 1, j = n; i < j; i++, j--) {

            if (i & 1) {
                a.pb(i);
                a.pb(j);
            } else {
                b.pb(i);
                b.pb(j);
            }
        }
    }

    cout << "YES" << endl;
    cout << a.size() << endl;

    for (auto i : a) cout << i << " ";

    cout << endl;

    cout << b.size() << endl;
    for (auto i : b) cout << i << " ";

    cout << endl;

    return 0;
}