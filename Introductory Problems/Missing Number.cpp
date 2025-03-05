// Problem link ---->
https://cses.fi/problemset/task/1083/

// Solutions ---->

// using sorting
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

    vector<int> a(n - 1);

    for (int i = 0; i < n - 1; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int ans;

    for (int i = 1; i <= n; i++) {
        if (a[i - 1] != i) {
            ans = i;
            break;
        }
    }

    cout << ans << endl;
    return 0;
}


// using visited array
#include <bits/stdc++.h>
 
using namespace std;
 
int visited[200005] = {0};
 
int Mising_Number(int visited[])
{
    for (int i = 1; i < 200005; i++)
        if (!visited[i])
            return i;
}
int main()
{
    int n;
    cin >> n;
 
    for (int i = 0; i < n; ++i)
    {
        int a;
        cin >> a;
        visited[a] = 1;
    }
    cout << Mising_Number(visited);
 
    return 0;
}

// using mathematical formula
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
 
    ll n; cin >> n;
 
    ll sum = 0;
 
    for (ll i = 1; i < n; ++i) {
        ll num; cin >> num;
        sum += num;
    }
 
    ll res = (n * (n + 1) / 2) - sum;
 
    cout << res << endl;
 
    return 0;
}
