#include <string>
#include <stack>

using namespace std;

bool isValid(string s) {
    stack<char> openChars;
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];

        if (c == '(' || c == '[' || c == '{') {
            openChars.push(c);
        } else {
            if (openChars.empty()) {
                return false;
            }
            if ((c == ')' && openChars.top() == '(') ||
                (c == ']' && openChars.top() == '[') ||
                (c == '}' && openChars.top() == '{')) {
                openChars.pop();
                } else {
                    return false;
                }
        }
    }
    return openChars.empty();
}
