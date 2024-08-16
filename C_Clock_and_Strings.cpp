#include <bits/stdc++.h>
using namespace std;

/*
    CODE BY: LAHCSIN
*/

int makePositive(int a);

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
   
    int a, b, c, d; cin >> a >> b >> c >> d;

    a+=b; c+=d;

    a-=c;
    
    if(makePositive(a)>=7) cout << "YES" << endl;
    else cout << "NO" << endl;



}

int makePositive(int a){

    if(a<0) return -a;
    return a;

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