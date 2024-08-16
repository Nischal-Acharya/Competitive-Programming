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

// Some importaint function
int hcf(int a, int b) { while (b != 0) { int temp = b; b = a % b; a = temp; } return a; }
int lcm(int a, int b) { return abs(a * b) / hcf(a, b); }
bool is_prime(int n) {if (n <= 1) return false; if (n <= 3) return true; if (n % 2 == 0 || n % 3 == 0) return false; for (int i = 5; i * i <= n; i += 6) {if (n % i == 0 || n % (i + 2) == 0) return false;} return true;}
int power_mod(int a, int b, int mod) {int result = 1; a = a % mod; while (b > 0) {if (b % 2 == 1) {result = (result * a) % mod;} b = b >> 1; a = (a * a) % mod;} return result;}
long long factorial(int n) {long long result = 1; for (int i = 2; i <= n; i++) {result *= i;} return result;}

void solve() {
   
    int pointA=0, pointB=0, pointC=0, universal=1;

    int n; cin >> n;
    bool acc = false;
    string playerA[n], playerB[n], playerC[n];


    // Inputs
    for(int i=0; i<n; i++) cin >> playerA[i];
    for(int i=0; i<n; i++) cin >> playerB[i];
    for(int i=0; i<n; i++) cin >> playerC[i];


    // count for playerA
    universal = 0;
    acc = false;
    for(int i=0; i<n; i++){

        if(acc) break;

        for(int j=0; j<n; j++){
            if(playerA[i]==playerB[j]){ universal++; acc = true; break;}
        }
    } 

    acc = false;

    for(int i=0; i<n; i++){

        if(acc) break;

        for(int j=0; j<n; j++){
            if(playerA[i]==playerC[j]){ universal++; acc = true;  break;}
        }
    }

    if(universal==2) pointA+=1;
    if(universal==1) pointA+=3;



    // count for playerB
    universal = 0;
    acc = false;

    for(int i=0; i<n; i++){

        if(acc) break;

        for(int j=0; j<n; j++){
            if(playerB[i]==playerA[j]){ universal++; acc = true;  break;}
        }
    } 


    acc = false;

    for(int i=0; i<n; i++){

        if(acc) break;

        for(int j=0; j<n; j++){
            if(playerB[i]==playerC[j]){ universal++; acc = true;  break;}
        }
    }

    if(universal==2) pointB+=1;
    if(universal==1) pointB+=3;




     // count for playerC
    universal = 0;
    acc = false;

    for(int i=0; i<n; i++){

        if(acc) break;
        for(int j=0; j<n; j++){
            if(playerC[i]==playerA[j]){ universal++; acc = true;  break;}
        }
    } 

    acc = false;

    for(int i=0; i<n; i++){

        if(acc) break;
        for(int j=0; j<n; j++){
            if(playerC[i]==playerB[j]){ universal++; acc = true;  break;}
        }
    }

    if(universal==2) pointC+=1;
    if(universal==1) pointC+=3;



    cout << pointA << " " << pointB << " " << pointC << endl;


    // count for playerA
    // universal = 0;
    // for(int i=0; i<n; i++) if(playerA[1]==playerB[i]){ universal++; break;}
    // for(int i=0; i<n; i++) if(playerA[1]==playerC[i]){ universal++; break;}
    // if(universal==2) pointA+=1;
    // if(universal==1) pointA+=3;


    // // count for playerA
    // universal = 0;
    // for(int i=0; i<n; i++) if(playerA[2]==playerB[i]){ universal++; break;}
    // for(int i=0; i<n; i++) if(playerA[2]==playerC[i]){ universal++; break;}
    // if(universal==2) pointA+=1;
    // if(universal==1) pointA+=3;
    

    // // count for playerB
    // universal = 0;
    // for(int i=0; i<n; i++) if(playerB[0]==playerA[i]){ universal++; break;}
    // for(int i=0; i<n; i++) if(playerB[0]==playerC[i]){ universal++; break;}
    // if(universal==2) pointB+=1;
    // if(universal==1) pointB+=3;

    // // count for playerB
    // universal = 0;
    // for(int i=0; i<n; i++) if(playerB[1]==playerA[i]){ universal++; break;}
    // for(int i=0; i<n; i++) if(playerB[1]==playerC[i]){ universal++; break;}
    // if(universal==2) pointB+=1;
    // if(universal==1) pointB+=3;

    // // count for playerB
    // universal = 0;
    // for(int i=0; i<n; i++) if(playerB[2]==playerA[i]){ universal++; break;}
    // for(int i=0; i<n; i++) if(playerB[2]==playerC[i]){ universal++; break;}
    // if(universal==2) pointB+=1;
    // if(universal==1) pointB+=3;



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