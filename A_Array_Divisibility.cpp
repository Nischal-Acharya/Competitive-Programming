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
int binaryToDecimal(int bin) {int decimal = 0;int base = 1;while (bin > 0) {int lastDigit = bin % 10;bin = bin / 10;decimal += lastDigit * base;base *= 2;}return decimal;}
int binaryToOctal(int bin) {int decimal = binaryToDecimal(bin);int octal = 0;int base = 1;while (decimal > 0) {int lastDigit = decimal % 8;decimal = decimal / 8;octal += lastDigit * base;base *= 10;}return octal;}
string binaryToHexadecimal(int bin) {int decimal = binaryToDecimal(bin);string hexadecimal;while (decimal > 0) {int remainder = decimal % 16;if (remainder < 10) {hexadecimal = to_string(remainder) + hexadecimal;} else {hexadecimal = char('A' + remainder - 10) + hexadecimal;}decimal /= 16;}return hexadecimal;}
int octalToDecimal(int oct) {int decimal = 0;int base = 1;while (oct > 0) {int lastDigit = oct % 10; oct = oct / 10;decimal += lastDigit * base;base *= 8;}return decimal;}
int octalToBinary(int oct) {int decimal = octalToDecimal(oct);int binary = 0;int base = 1;while (decimal > 0) {int lastDigit = decimal % 2;decimal = decimal / 2;binary += lastDigit * base;base *= 10;}return binary;}
string octalToHexadecimal(int oct) {int decimal = octalToDecimal(oct);string hexadecimal;while (decimal > 0) {int remainder = decimal % 16;if (remainder < 10) {hexadecimal = to_string(remainder) + hexadecimal;} else {hexadecimal = char('A' + remainder - 10) + hexadecimal;}decimal /= 16;}return hexadecimal;}
int decimalToBinary(int dec) {int binary = 0;int base = 1;while (dec > 0) {int lastDigit = dec % 2;  dec = dec / 2;binary += lastDigit * base;base *= 10;}return binary;}
int decimalToOctal(int dec) {int octal = 0;int base = 1;while (dec > 0) {int lastDigit = dec % 8;    dec = dec / 8;octal += lastDigit * base;base *= 10;}return octal;}
string decimalToHexadecimal(int dec) {string hexadecimal;while (dec > 0) {int remainder = dec % 16;  if (remainder < 10) {hexadecimal = to_string(remainder) + hexadecimal;} else {hexadecimal = char('A' + remainder - 10) + hexadecimal;}dec /= 16;}return hexadecimal;}
int hexadecimalToBinary(const string &hex) {int decimal = stoi(hex, nullptr, 16);return decimalToBinary(decimal);}
int hexadecimalToOctal(const string &hex) {int decimal = stoi(hex, nullptr, 16);return decimalToOctal(decimal);}
int hexadecimalToDecimal(const string &hex) {return stoi(hex, nullptr, 16);}

int hcf(int a, int b) { while (b != 0) { int temp = b; b = a % b; a = temp; } return a; }
int lcm(int a, int b) { return abs(a * b) / hcf(a, b); }
bool is_prime(int n) {if (n <= 1) return false; if (n <= 3) return true; if (n % 2 == 0 || n % 3 == 0) return false; for (int i = 5; i * i <= n; i += 6) {if (n % i == 0 || n % (i + 2) == 0) return false;} return true;}
int power_mod(int a, int b, int mod) {int result = 1; a = a % mod; while (b > 0) {if (b % 2 == 1) {result = (result * a) % mod;} b = b >> 1; a = (a * a) % mod;} return result;}
long long factorial(int n) {long long result = 1; for (int i = 2; i <= n; i++) {result *= i;} return result;}

void solve() {

   int a; cin >> a;

    for(int i=1; i<=a; i++){
        cout << i << " ";
    }

   cout << endl;

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