#include <iostream>
#include <string>
#include <stack>
using namespace std;

string decodeString(string s) {
    stack<int> numStack; // Stack for numbers
    stack<string> strStack; // Stack for substrings
    string currStr = "";
    int num = 0;

    for (char c : s) {
        if (isdigit(c)) {
            num = c - '0'; // Handle multi-digit numbers
        } else if (c == '[') {
            numStack.push(num);
            strStack.push(currStr);
            num = 0;
            currStr = "";
        } else if (c == ']') {
            int repeatCount = numStack.top(); numStack.pop();
            string temp = currStr;
            currStr = strStack.top(); strStack.pop();
            while (repeatCount--) {
                currStr += temp;
            }
        } else {
            currStr += c;
        }
    }
    return currStr;
}

int main() {
    string s = "3[a2[c]]";
    cout << decodeString(s) << endl; // Output: "aaabcbc"
    return 0;
}
