/*
 * [12] Integer to Roman
 *
 * https://leetcode.com/problems/integer-to-roman/description/
 *
 * algorithms
 * Medium (46.10%)
 * Total Accepted:    135.6K
 * Total Submissions: 294K
 * Testcase Example:  '1'
 *
 * Given an integer, convert it to a roman numeral.
 * 
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
    string intToRoman(int num) {
        // init roman char (pair) from big to small
        static int nums[13] = {1000, 900, 500, 400, 100, 90, 50,
            40, 10, 9, 5, 4, 1};
        static string chars[13] = {"M", "CM", "D", "CD", "C", "XC", "L",
            "XL", "X", "IX", "V", "IV", "I"};

        string result;
        for (int i = 0; i < 13 && num > 0; i++) {
            if (num < nums[i])
                continue;
            while(num >= nums[i]) {
                num -= nums[i];
                result += chars[i];
            }
        }
        return result;
    }
};

// Another Quicker Solution
class Solution {
public:
    string intToRoman(int num) {
        string m[] = {"", "M", "MM", "MMM"};
        string c[] = {"", "C", "CC", "CCC", "CD", "D", 
                        "DC", "DCC", "DCCC", "CM"};
        string x[] = {"", "X", "XX", "XXX", "XL", "L", 
                        "LX", "LXX", "LXXX", "XC"};
        string i[] = {"", "I", "II", "III", "IV", "V", 
                        "VI", "VII", "VIII", "IX"};
         
        return m[num/1000] + c[(num%1000)/100] + x[(num%100)/10] + i[num%10];

    }
};
