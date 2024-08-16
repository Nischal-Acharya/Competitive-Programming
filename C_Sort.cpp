#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to calculate the character frequencies in the substring
int min_operations(vector<vector<int>>& prefix_a, vector<vector<int>>& prefix_b, int l, int r) {
    vector<int> count_a(26, 0), count_b(26, 0);
    
    for (int i = 0; i < 26; ++i) {
        count_a[i] = prefix_a[r][i] - prefix_a[l - 1][i];
        count_b[i] = prefix_b[r][i] - prefix_b[l - 1][i];
    }

    int operations = 0;
    for (int i = 0; i < 26; ++i) {
        if (count_b[i] > count_a[i]) {
            operations += (count_b[i] - count_a[i]);
        }
    }
    
    return operations;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        string a, b;
        cin >> a >> b;

        // Convert strings to 1-based indexing by adding a space at the beginning
        a = " " + a;
        b = " " + b;

        // Create prefix sum arrays for both strings
        vector<vector<int>> prefix_a(n + 1, vector<int>(26, 0)), prefix_b(n + 1, vector<int>(26, 0));

        for (int i = 1; i <= n; ++i) {
            for (int j = 0; j < 26; ++j) {
                prefix_a[i][j] = prefix_a[i - 1][j];
                prefix_b[i][j] = prefix_b[i - 1][j];
            }
            prefix_a[i][a[i] - 'a']++;
            prefix_b[i][b[i] - 'a']++;
        }

        vector<int> results;
        for (int i = 0; i < q; ++i) {
            int l, r;
            cin >> l >> r;
            results.push_back(min_operations(prefix_a, prefix_b, l, r));
        }

        for (int res : results) {
            cout << res << endl;
        }
    }

    return 0;
}
