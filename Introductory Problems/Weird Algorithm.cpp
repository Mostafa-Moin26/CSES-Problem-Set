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

    // https://cses.fi/problemset/task/1068/
 
    ll n; cin >> n;
 
    cout << n << " ";
 
    while (n > 1) {
        if (n & 1) n = 3 * n + 1;
        else n = n / 2;
 
        cout << n << " ";
    }
 
    return 0;
}