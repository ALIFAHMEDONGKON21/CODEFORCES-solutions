#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string ab;
        cin >> ab;

        int n = ab.length();

        // Iterate through possible positions to split the string
        for (int i = 1; i < n; ++i) {
            string a_str = ab.substr(0, i);
            string b_str = ab.substr(i,n);

            // Remove leading zeros
            if (a_str[0] == '0' || b_str[0] == '0') {
                continue;
            }

            int a = stoi(a_str);
            int b = stoi(b_str);

            if (b > a) {
                cout << a << " " << b << endl;
                break;
            }
        }

        if (t > 0) {
            cout << -1 << endl;
        } else {
            cout << -1;
        }
    }

    return 0;
}
