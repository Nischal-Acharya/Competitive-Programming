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
   
    int n; cin >> n; long long a[n], ans=1, max = 1;

    for(long long i=0; i<n; i++) cin >> a[i];
 
    long long sequence = a[0];

    for(int i=1; i<n; i++){

        if(sequence<a[i]){
            max++;
            if(max>ans){
                ans = max;
            }
        }else{
            max = 1;
        }
        sequence = a[i];

    }
    cout << ans << endl;


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}