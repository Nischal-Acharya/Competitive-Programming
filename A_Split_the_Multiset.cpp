#include <iostream>
using namespace std;

int min_operations(int n, int k) {
    int operations = 0;

    while (n > 1) {
        if (n <= k) {
            operations += (n - 1);  // Reduce to 1 in (n-1) operations
            break;
        } else {
            int remainder = n % k;
            operations += remainder == 0 ? 1 : remainder; // Reduce to nearest multiple of k
            n -= remainder;
            n /= k;
            operations++;
        }
    }

    return operations;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        cout << min_operations(n, k) << endl;
    }

    return 0;
}
