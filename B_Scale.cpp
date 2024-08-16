#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<string> grid(n);
        for (int i = 0; i < n; ++i) {
            cin >> grid[i];
        }
        
        int reducedSize = n / k;
        vector<string> reducedGrid(reducedSize);

        for (int i = 0; i < reducedSize; ++i) {
            for (int j = 0; j < reducedSize; ++j) {
                reducedGrid[i].push_back(grid[i * k][j * k]);
            }
        }

        for (const string& row : reducedGrid) {
            cout << row << endl;
        }
    }

    return 0;
}
