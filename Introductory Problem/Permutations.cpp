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

    if (n == 2 || n == 3) cout << "NO SOLUTION" << endl;
    else if (n == 4) {
        cout << 3 << " " << 1 << " " << 4 << " " << 2 << endl;
    } else {
        for (int i = 1; i <= n; i += 2) cout << i << " ";
        for (int i = 2; i <= n; i += 2) cout << i << " ";
        cout << endl;
    }

    return 0;
}