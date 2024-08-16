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
   
    string tableCard; cin >> tableCard;
    string a;
    bool can = false;

    for (int i=0; i<5; i++){
        cin >> a;

        if((tableCard[0]==a[0])||(tableCard[1]==a[1])){ can = true; break;}

    } 

    if(can) cout << "YES" << endl;
    else cout << "NO" << endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}