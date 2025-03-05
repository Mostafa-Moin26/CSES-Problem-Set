// Problem link --->
https://cses.fi/problemset/task/1094/

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
 
    int n; cin >> n;
 
    vector<int> a(n);
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    int val = a[0];
    int ans = 0;
 
    for (int i = 1; i < n; i++) {
 
        if (a[i] < val) {
            ans += (val - a[i]);
        } else {
            val = a[i];
        }
    }
 
    cout << ans << endl;
    
    return 0;
}

//Slightly improved code
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

    int n; cin >> n;

    int prev, ans = 0;
    cin >> prev;

    for (int i = 1, curr; i < n; i++) {

        cin >> curr;

        if (prev > curr) {
            ans += (prev - curr);
        } else {
            prev = curr;
        }
    }

    cout << ans << endl;
    return 0;
}