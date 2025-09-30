#include <bits/stdc++.h>
using namespace std;

int strStr(string haystack, string needle) {
    if (needle.empty()) return 0;
    size_t pos = haystack.find(needle);
    return (pos == string::npos) ? -1 : (int)pos;
}

int main() {
    string haystack, needle;
    cout << "Enter haystack: ";
    cin >> haystack;
    cout << "Enter needle: ";
    cin >> needle;

    int result = strStr(haystack, needle);
    if (result != -1)
        cout << "Needle found at index: " << result << endl;
    else
        cout << "Needle not found!" << endl;

    return 0;
}
