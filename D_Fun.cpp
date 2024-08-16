#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

long long countTriplets(int n, int x) {
    long long count = 0;

    // Iterate over possible values of a and b
    for (int a = 1; a <= x; ++a) {
        for (int b = 1; b <= x; ++b) {
            // Calculate the maximum possible value of c
            int c_max = min(x - (a + b), n / (a + b) - 1);
            if (c_max < 1) continue;  // No valid c for this a and b

            // Sum up valid c values
            for (int c = 1; c <= c_max; ++c) {
                if (a * b + a * c + b * c <= n) {
                    ++count;
                }
            }
        }
    }
    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    vector<long long> results;

    while (t--) {
        int n, x;
        cin >> n >> x;
        results.push_back(countTriplets(n, x));
    }

    for (const auto &result : results) {
        cout << result << endl;
    }

    return 0;
}
