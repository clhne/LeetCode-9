/*
 * [13] Roman to Integer
 *
 * https://leetcode.com/problems/roman-to-integer/description/
 *
 * algorithms
 * Easy (47.81%)
 * Total Accepted:    216K
 * Total Submissions: 451.9K
 * Testcase Example:  '"DCXXI"'
 *
 * Given a roman numeral, convert it to an integer.
 * 
 * Input is guaranteed to be within the range from 1 to 3999.
 */
#include"common.h"

static const auto ________ = []() {
    std::ios::snyc_with_stdio(false);
    std::cin.tie(nullptr);
    return nullptr;
}
class Solution {
public:
    int romanToInt(string s) {
        // init map: roman char to number
        static unordered_map<char, int> map = {{'I', 1}, {'V', 5},
            {'X', 10}, {'C', 100}, {'M', 1000}, {'L', 50}, {'D', 500}};
        int result = 0;
        for (size_t i = 0; i < s.length(); i++) {
            if (i < s.length() - 1 && map[s[i]] < map[s[i+1]])
                result -= map[s[i]];
            else
                result += map[s[i]];
        }
        return result;
    }
};
