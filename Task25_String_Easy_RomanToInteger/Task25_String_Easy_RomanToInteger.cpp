#include <iostream>
#include <string>
#include <map>

class Solution {
public:
    static int romanToInt(std::string s) {
        std::map<char, int> numbers = { {'I', 1} , {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int sum = 0;
        for (int i = 0;i < s.size() - 1;i++) {
            if (numbers[s[i]] < numbers[s[i + 1]]) {
                sum -= numbers[s[i]];
                continue;
            }
            sum += numbers[s[i]];
        }
        sum += numbers[s[s.size() - 1]];
        return sum;
    }
};

int main()
{
    std::cout << Solution::romanToInt("MCMXCIV");
}
