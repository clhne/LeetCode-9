/*
 * [14] Longest Common Prefix
 *
 * https://leetcode.com/problems/longest-common-prefix/description/
 *
 * algorithms
 * Easy (31.60%)
 * Total Accepted:    255.3K
 * Total Submissions: 808.1K
 * Testcase Example:  '[]'
 *
 * Write a function to find the longest common prefix string amongst an array
 * of strings.
 * 
 */
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result;
        if (!strs.empty()) {
            char curr;
            size_t i, j;
            for (i = 0; i < strs[0].size(); i++) {
                curr = strs[0][i];
                for (j = 1; j < strs.size(); j++) {
                    if (i >= strs[j].size() || curr != strs[j][i])
                        break;
                }
                if (j != strs.size())
                    break;
                else
                    result.push_back(curr);
            }
        }
        return result;
    }
};
