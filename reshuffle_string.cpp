#include <iostream>
#include <vector>
#include <string>
using namespace std;

string restoreString(string s, vector<int>& indices) {
    int n = s.size();
    string result(n, ' ');  // create a string of same length filled with spaces
    
    for (int i = 0; i < n; i++) {
        result[indices[i]] = s[i];  // place each character in the right position
    }
    
    return result;
}

int main() {
    string s = "codeleet";
    vector<int> indices = {4,5,6,7,0,2,1,3};
    
    cout << restoreString(s, indices) << endl;  // Output: leetcode
    
    return 0;
}
