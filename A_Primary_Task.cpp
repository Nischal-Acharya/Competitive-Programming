#include <iostream>
#include <string>
using namespace std;

bool isPossibleImportantNumber(string a) {
    // Check if the string starts with "10"
    if (a.substr(0, 2) == "10") {
        // If the remaining part of the string is only zeros, it's not possible
        if (a.substr(2).find_first_not_of('0') == string::npos) {
            return false;
        }
        // Otherwise, it could be a miswritten important number
        return true;
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string a;
        cin >> a;
        
        if (isPossibleImportantNumber(a)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
