// Problem link ---->
https://cses.fi/problemset/task/1069/

// Beginner approach
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

// Optimize approach
#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define PI 3.141592653589793238462
#define Mostafa         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define int              long long
#define pb              push_back
#define ff              first
#define ss              second
#define ps(x,y)         fixed<<setprecision(y)<<x
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)

signed main() {
    Mostafa

    string s; cin >> s;

    int ans = 1, cnt = 1;

    for (int i = 0; i < s.size() - 1; i++) {

        if (s[i] == s[i + 1]) {
            cnt++;
        } else {
            cnt = 1;
        }

        ans = max(ans, cnt);
    }

    cout << ans << endl;

    return 0;
}