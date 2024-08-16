#include <bits/stdc++.h>
using namespace std;

/*
    CODE BY: LAHCSIN
*/

// Shortcut for commonly used data types
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>

// Shortcut for commonly used functions
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define pb push_back
#define mp make_pair

// Shortcut for loops
#define FOR(i, a, b) for (int i = a; i < b; ++i)
#define REP(i, n) FOR(i, 0, n)
#define FORD(i, a, b) for (int i = a; i >= b; --i)
#define REPD(i, n) FORD(i, n - 1, 0)

// Debugging helper
#define debug(x) cerr << #x << " = " << x << endl

// Constants
const int MOD = 1e9 + 7;
const double EPS = 1e-9;


void solve() {
   
    int a, b, c; cin >> a >> b >> c;

   int maximum = max(a, b);
   maximum = max(maximum, c);

    if((a>b && a>c) || (b>a && b>c) || (c>a && c>b)){
        if(a>b && a>c) cout << maximum-a << " " << maximum-b+1 << " " << maximum-c+1 << endl;
        if(b>a && b>c) cout << maximum-a+1 << " " << maximum-b << " " << maximum-c+1 << endl;
        if(c>a && c>b) cout << maximum-a+1 << " " << maximum-b+1 << " " << maximum-c << endl;
    }else cout << maximum-a+1 << " " << maximum-b+1 << " " << maximum-c+1 << endl;


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}