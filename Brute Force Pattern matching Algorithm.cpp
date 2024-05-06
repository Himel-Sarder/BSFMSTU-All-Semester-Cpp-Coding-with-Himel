#include <iostream>
#include <string>
using namespace std;

// Brute-force pattern matching function
int bruteForcePatternMatch(const string& text, const string& pattern) {
    int n = text.length();
    int m = pattern.length();

    // Iterate through each position in the text
    for (int i = 0; i <= n - m; ++i) {
        int j;

        // Check if the pattern matches the substring starting at position i
        for (j = 0; j < m; ++j) {
            if (text[i + j] != pattern[j]) {
                break; // If a mismatch is found, break the loop
            }
        }

        // If the loop completed without breaking and j reached the end of the pattern,
        // it means the pattern was found starting at position i
        if (j == m) {
            return i; // Return the starting index of the pattern in the text
        }
    }

    // If the pattern is not found in the text
    return -1;
}

int main() {
    string text = "HIMELBSFMSTU";
    string pattern = "BSF";

    int result = bruteForcePatternMatch(text, pattern);
    if (result != -1) {
        cout << "Pattern found at index: " << result << endl;
    } else {
        cout << "Pattern not found in text" << endl;
    }

    return 0;
}
