#include <vector>
#include <string>

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";
    string prefix = "";
    for (int j = 0; j < strs[0].size(); j++) {
        char current = strs[0][j];
        for (int i = 0; i < strs.size(); i++) {
            if (j >= strs[i].size() || strs[i][j] != current) {
                return prefix;
            }
        }
        prefix += current;
    }
    return prefix;
}