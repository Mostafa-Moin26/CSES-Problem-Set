
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

    int sum = n * (n + 1) / 2;

    if (sum & 1) {
        cout << "NO" << endl;
        return 0;
    }

    vector<int> evenSum, oddSum;
    ll even, odd; even = odd = 0;

    for (int i = 1; i <= n; ++i) {

        if (i & 1) {
            oddSum.pb(i);
            odd += i;
        } else {
            evenSum.pb(i);
            even += i;
        }
    }

    ll diff = abs(even - odd);

    cout << "YES" << endl;

    if (even > odd) {

        diff /= 2;

        if (diff & 1) {
            oddSum.pb(diff + 1);
            evenSum.pb(1);

            cout << oddSum.size() - 1 << endl;
            for (int i = 0; i < oddSum.size(); ++i) {
                if (oddSum[i] == 1) {
                    continue;
                }
                cout << oddSum[i] << " ";
            }

            cout << endl;

            cout << evenSum.size() - 1 << endl;

            for (int i = 0; i < evenSum.size(); ++i) {
                if (evenSum[i] == diff + 1) {
                    continue;
                }
                cout << evenSum[i] << " ";
            }
            cout << endl;
        } else {
            oddSum.pb(diff);

            cout << oddSum.size() << endl;
            for (auto i : oddSum) cout << i << " ";

            cout << endl;

            cout << evenSum.size() - 1 << endl;

            for (int i = 0; i < evenSum.size(); ++i) {
                if (evenSum[i] == diff) {
                    continue;
                }
                cout << evenSum[i] << " ";
            }
        }
    } else {

        diff /= 2;

        if (diff & 1) {
            evenSum.pb(diff);

            cout << oddSum.size() - 1 << endl;
            for (int i = 0; i < oddSum.size(); ++i) {
                if (oddSum[i] == diff) {
                    continue;
                }
                cout << oddSum[i] << " ";
            }
            cout << endl;
            cout << evenSum.size() << endl;
            for (auto i : evenSum) cout << i << " ";
            cout << endl;
        } else {

            evenSum.pb(diff + 1);
            evenSum.pb(1);
            oddSum.pb(2);

            cout << oddSum.size() - 2  << endl;
            for (int i = 0; i < oddSum.size(); ++i) {
                if (oddSum[i] == 1 || oddSum[i] == diff + 1) {
                    continue;
                }
                cout << oddSum[i] << " ";
            }
            cout << endl;
            cout << evenSum.size() - 1 << endl;
            for (int i = 0; i < evenSum.size(); ++i) {
                if (evenSum[i] == 2) {
                    continue;
                }
                cout << evenSum[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}