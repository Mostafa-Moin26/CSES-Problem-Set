#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define PI 3.141592653589793238462
#define Mostafa         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define w(x)            int x;cin>>x;while(x--)
#define int              long long
#define pb              push_back
#define ff              first
#define ss              second
#define ps(x,y)         fixed<<setprecision(y)<<x
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)

signed main() {
    Mostafa

    // https://cses.fi/problemset/task/1071/

    w(x) {
        int x, y; cin >> x >> y;  

        int ans;  

        if (x > y) {

            if (x & 1) {
                ans = (x - 1) * (x - 1) + y; 
            } else {
                ans = x * x - y + 1;
            }
        } else {

            if (y & 1) {
                ans = y * y - x + 1;
            } else {
                ans = (y - 1) * (y - 1) + x;
            }
        }

        cout << ans << endl;
    }
    return 0;
}