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

    string s; cin >> s;

    int n = s.size();

    int ans = -1, cnt;

    for (int i = 0; i < n; ++i) {

        cnt = 1;
        while (i < n && s[i] == s[i + 1]) {
            cnt++, i++;
        }

        ans = max(ans, cnt);
    }

    cout << ans << endl;
    return 0;
}