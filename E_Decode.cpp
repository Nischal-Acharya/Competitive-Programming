#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

const int MOD = 1000000007;

using namespace std;

long long countBalancedSubstrings(const string& s) {
    int n = s.size();
    unordered_map<int, int> prefix_count;
    prefix_count[0] = 1;  // Base case to handle substrings starting from index 0
    int balance = 0;
    long long result = 0;
    
    for (char ch : s) {
        if (ch == '0') {
            balance--;
        } else {
            balance++;
        }
        // For the current balance, add the count of this balance
        if (prefix_count.find(balance) != prefix_count.end()) {
            result += prefix_count[balance];
            result %= MOD;
        }
        // Update the count for this balance
        prefix_count[balance]++;
    }
    
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    vector<string> results;
    
    while (t--) {
        string s;
        cin >> s;
        results.push_back(to_string(countBalancedSubstrings(s)));
    }
    
    for (const string& result : results) {
        cout << result << "\n";
    }
    
    return 0;
}
