#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Function to perform the first operation on a given string
string performOperation1(string s, int index) {
    if (s[index] == 'A') {
        s[index] = 'B';
        s.insert(index + 1, "B");
    } else {
        s[index] = 'A';
        s.insert(index + 1, "A");
    }
    return s;
}

// Function to perform the second operation on a given string
string performOperation2(string s, string substring) {
    // Find the first occurrence of the substring
    size_t pos = s.find(substring);
    while (pos != string::npos) {
        // Delete the substring from the string
        s.erase(pos, substring.length());
        // Find the next occurrence of the substring
        pos = s.find(substring);
    }
    return s;
}

int main() {
    string S, T;
    int q;
    cin >> S >> T >> q;

    vector<int> a(q), b(q), c(q), d(q);
    for (int i = 0; i < q; i++) {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }

    for (int i = 0; i < q; i++) {
        string substringS = S.substr(a[i] - 1, b[i] - a[i] + 1);
        string substringT = T.substr(c[i] - 1, d[i] - c[i] + 1);

        // Check if substringS can be transformed into substringT
        bool possible = false;
        while (substringS != substringT) {
            // Perform operation 1 on substringS
            for (int j = 0; j < substringS.length(); j++) {
                substringS = performOperation1(substringS, j);
            }

            // Perform operation 2 on substringS
            substringS = performOperation2(substringS, "AAA");
            substringS = performOperation2(substringS, "BBB");

            // If substringS becomes empty, it is not possible to transform it into substringT
            if (substringS.empty()) {
                break;
            }
        }

        // Check if substringS is equal to substringT after the transformations
        if (substringS == substringT) {
            possible = true;
        }

        // Print the result
        if (possible) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}